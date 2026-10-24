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

// Function: entry_0017c8f0
// Address: 0x17c8f0 - 0x17c978
void entry_0017c8f0_0x17c8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c8f0_0x17c8f0");
#endif

    switch (ctx->pc) {
        case 0x17c904u: goto label_17c904;
        case 0x17c954u: goto label_17c954;
        default: break;
    }

    ctx->pc = 0x17c8f0u;

    // 0x17c8f0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17c8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17c8f4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c8f8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17c8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c8fc: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C8FCu;
    SET_GPR_U32(ctx, 31, 0x17C904u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C904u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C904u) { return; }
    ctx->pc = 0x17C904u;
label_17c904:
    // 0x17c904: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c90c: 0x0  nop
    ctx->pc = 0x17c90cu;
    // NOP
    // 0x17c910: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17c910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17c914: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x17c914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c918: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c918u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c91c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x17c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c920: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17c920u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17c924: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c92c: 0x0  nop
    ctx->pc = 0x17c92cu;
    // NOP
    // 0x17c930: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17c930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x17c934: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x17c934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x17c938: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17c938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17c93c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17c940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c944: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17c944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c948: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x17c948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17c94c: 0xc05f7ac  jal         func_17DEB0
    ctx->pc = 0x17C94Cu;
    SET_GPR_U32(ctx, 31, 0x17C954u);
    ctx->pc = 0x17DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DEB0u, 0x17C94Cu, 0x17C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C954u;
label_17c954:
    // 0x17c954: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x17c954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x17c958: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17c958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c95c: 0x0  nop
    ctx->pc = 0x17c95cu;
    // NOP
    // 0x17c960: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17c960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c964: 0x0  nop
    ctx->pc = 0x17c964u;
    // NOP
    // 0x17c968: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x17C968u;
    {
        const bool branch_taken_0x17c968 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c968) {
            ctx->pc = 0x17C978u;
            return;
        }
    }
    ctx->pc = 0x17C970u;
    // 0x17c970: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x17c970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17c974: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17c974u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x17c978u;
}
