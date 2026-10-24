#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_002fd1b0
// Address: 0x2fd1b0 - 0x2fd258
void entry_002fd1b0_0x2fd1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fd1b0_0x2fd1b0");
#endif

    switch (ctx->pc) {
        case 0x2fd20cu: goto label_2fd20c;
        case 0x2fd224u: goto label_2fd224;
        default: break;
    }

    ctx->pc = 0x2fd1b0u;

    // 0x2fd1b0: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x2fd1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd1b4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd1b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd1b8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd1bc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2fd1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2fd1c0: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x2fd1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x2fd1c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2fd1c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd1c8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2fd1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fd1cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fd1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2fd1d0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2fd1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2fd1d4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2fd1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2fd1d8: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x2fd1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd1dc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd1dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd1e0: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd1e4: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x2fd1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2fd1e8: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x2fd1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd1ec: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd1ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd1f0: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd1f4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2fd1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2fd1f8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd1fc: 0x24651600  addiu       $a1, $v1, 0x1600
    ctx->pc = 0x2fd1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fd200: 0x24461610  addiu       $a2, $v0, 0x1610
    ctx->pc = 0x2fd200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x2fd204: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2FD204u;
    SET_GPR_U32(ctx, 31, 0x2FD20Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2FD204u, 0x2FD20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD20Cu;
label_2fd20c:
    // 0x2fd20c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2fd20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2fd210: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fd210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd214: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd218: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fd218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd21c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2FD21Cu;
    SET_GPR_U32(ctx, 31, 0x2FD224u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2FD224u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD224u) { return; }
    ctx->pc = 0x2FD224u;
label_2fd224:
    // 0x2fd224: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fd224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fd228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fd228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd22c: 0x0  nop
    ctx->pc = 0x2fd22cu;
    // NOP
    // 0x2fd230: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2fd230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2fd234: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fd234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd238: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fd238u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd23c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2fd23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fd240: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fd240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fd244: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fd244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fd248: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fd248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fd24c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fd24cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fd250: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fd250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fd254: 0x0  nop
    ctx->pc = 0x2fd254u;
    // NOP
    ctx->pc = 0x2fd258u;
}
