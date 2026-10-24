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

// Function: entry_0019c6b0
// Address: 0x19c6b0 - 0x19c75c
void entry_0019c6b0_0x19c6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c6b0_0x19c6b0");
#endif

    switch (ctx->pc) {
        case 0x19c6e8u: goto label_19c6e8;
        case 0x19c718u: goto label_19c718;
        default: break;
    }

    ctx->pc = 0x19c6b0u;

    // 0x19c6b0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x19c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x19c6b4: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x19c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x19c6b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19c6b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c6bc: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x19c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19c6c0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x19c6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x19c6c4: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x19c6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19c6c8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x19c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x19c6cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c6d0: 0x0  nop
    ctx->pc = 0x19c6d0u;
    // NOP
    // 0x19c6d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19c6d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19c6d8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x19c6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x19c6dc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x19c6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x19c6e0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x19C6E0u;
    SET_GPR_U32(ctx, 31, 0x19C6E8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x19C6E0u, 0x19C6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C6E8u;
label_19c6e8:
    // 0x19c6e8: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x19c6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19c6ec: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x19c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x19c6f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c6f4: 0x0  nop
    ctx->pc = 0x19c6f4u;
    // NOP
    // 0x19c6f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19c6f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19c6fc: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x19c6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x19c700: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x19c700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x19c704: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x19c704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x19c708: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x19c708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x19c70c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x19c70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x19c710: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x19C710u;
    SET_GPR_U32(ctx, 31, 0x19C718u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x19C718u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19C718u) { return; }
    ctx->pc = 0x19C718u;
label_19c718:
    // 0x19c718: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x19c718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19c71c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x19c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x19c720: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19c720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c724: 0x0  nop
    ctx->pc = 0x19c724u;
    // NOP
    // 0x19c728: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19c728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19c72c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x19c72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x19c730: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19c730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19c734: 0x8c3e011c  lw          $fp, 0x11C($at)
    ctx->pc = 0x19c734u;
    SET_GPR_S32(ctx, 30, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x19c738: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19c738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19c73c: 0x8c230110  lw          $v1, 0x110($at)
    ctx->pc = 0x19c73cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0110u));
    // 0x19c740: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x19c740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x19c744: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x19c744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x19c748: 0x2470d390  addiu       $s0, $v1, -0x2C70
    ctx->pc = 0x19c748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955920));
    // 0x19c74c: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x19c74cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19c750: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x19c750u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19c754: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x19C754u;
    {
        const bool branch_taken_0x19c754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c754) {
            ctx->pc = 0x19C9F0u;
            return;
        }
    }
    ctx->pc = 0x19C75Cu;
}
