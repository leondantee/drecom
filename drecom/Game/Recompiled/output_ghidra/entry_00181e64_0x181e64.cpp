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

// Function: entry_00181e64
// Address: 0x181e64 - 0x181f3c
void entry_00181e64_0x181e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181e64_0x181e64");
#endif

    switch (ctx->pc) {
        case 0x181f0cu: goto label_181f0c;
        default: break;
    }

    ctx->pc = 0x181e64u;

    // 0x181e64: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181e68: 0x8427f138  lh          $a3, -0xEC8($at)
    ctx->pc = 0x181e68u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x47F138u));
    // 0x181e6c: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x181e6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
    // 0x181e70: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181e70u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181e74: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x181e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181e78: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181e7c: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181e80: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181e84: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x181e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181e88: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x181e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181e8c: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x181e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x181e90: 0x34c7d289  ori         $a3, $a2, 0xD289
    ctx->pc = 0x181e90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53897);
    // 0x181e94: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x181e94u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181e98: 0xc4600178  lwc1        $f0, 0x178($v1)
    ctx->pc = 0x181e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181e9c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181e9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181ea0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181ea4: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181ea4u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181ea8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x181ea8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x181eac: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x181eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x181eb0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181eb4: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181eb4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181eb8: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181eb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181ebc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181ebcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181ec0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x181ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181ec4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181ec8: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181ecc: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181ed0: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x181ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181ed4: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x181ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181ed8: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x181ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x181edc: 0x34c3d289  ori         $v1, $a2, 0xD289
    ctx->pc = 0x181edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53897);
    // 0x181ee0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181ee4: 0xc4e00178  lwc1        $f0, 0x178($a3)
    ctx->pc = 0x181ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181ee8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181ee8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181eec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181ef0: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181ef0u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181ef4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x181ef4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x181ef8: 0x0  nop
    ctx->pc = 0x181ef8u;
    // NOP
    // 0x181efc: 0x0  nop
    ctx->pc = 0x181efcu;
    // NOP
    // 0x181f00: 0x0  nop
    ctx->pc = 0x181f00u;
    // NOP
    // 0x181f04: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x181F04u;
    SET_GPR_U32(ctx, 31, 0x181F0Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x181F04u, 0x181F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181F0Cu;
label_181f0c:
    // 0x181f0c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x181f0cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x181f10: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181f14: 0xac23f210  sw          $v1, -0xDF0($at)
    ctx->pc = 0x181f14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F210u, _value); } while (0);
    // 0x181f18: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181f1c: 0x8c26f210  lw          $a2, -0xDF0($at)
    ctx->pc = 0x181f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x47F210u));
    // 0x181f20: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x181F20u;
    {
        const bool branch_taken_0x181f20 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x181f20) {
            ctx->pc = 0x181F3Cu;
            return;
        }
    }
    ctx->pc = 0x181F28u;
    // 0x181f28: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x181f28u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181f2c: 0x0  nop
    ctx->pc = 0x181f2cu;
    // NOP
    // 0x181f30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x181f30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x181f34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x181F34u;
    {
        const bool branch_taken_0x181f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181f34) {
            ctx->pc = 0x181F58u;
            return;
        }
    }
    ctx->pc = 0x181F3Cu;
}
