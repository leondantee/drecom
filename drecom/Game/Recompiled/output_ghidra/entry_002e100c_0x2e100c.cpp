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

// Function: entry_002e100c
// Address: 0x2e100c - 0x2e10a4
void entry_002e100c_0x2e100c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e100c_0x2e100c");
#endif

    switch (ctx->pc) {
        case 0x2e1020u: goto label_2e1020;
        case 0x2e102cu: goto label_2e102c;
        case 0x2e103cu: goto label_2e103c;
        case 0x2e104cu: goto label_2e104c;
        default: break;
    }

    ctx->pc = 0x2e100cu;

    // 0x2e100c: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e100cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1010: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2e1010u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2e1014: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e1014u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e1018: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E1018u;
    SET_GPR_U32(ctx, 31, 0x2E1020u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E1018u, 0x2E1020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1020u;
label_2e1020:
    // 0x2e1020: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e1020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1024: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2E1024u;
    SET_GPR_U32(ctx, 31, 0x2E102Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2E1024u, 0x2E102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E102Cu;
label_2e102c:
    // 0x2e102c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e102cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1030: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e1030u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e1034: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E1034u;
    SET_GPR_U32(ctx, 31, 0x2E103Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E1034u, 0x2E103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E103Cu;
label_2e103c:
    // 0x2e103c: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e103cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1040: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2e1040u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2e1044: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E1044u;
    SET_GPR_U32(ctx, 31, 0x2E104Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E1044u, 0x2E104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E104Cu;
label_2e104c:
    // 0x2e104c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e104cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1050: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2e1050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2e1054: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e1054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e1058: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2e1058u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e105c: 0xc64100a8  lwc1        $f1, 0xA8($s2)
    ctx->pc = 0x2e105cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1060: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2e1060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1064: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2e1064u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1068: 0x0  nop
    ctx->pc = 0x2e1068u;
    // NOP
    // 0x2e106c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e106cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e1070: 0xe64000a8  swc1        $f0, 0xA8($s2)
    ctx->pc = 0x2e1070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
    // 0x2e1074: 0xc64100a8  lwc1        $f1, 0xA8($s2)
    ctx->pc = 0x2e1074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1078: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x2e1078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x2e107c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e107cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1080: 0x0  nop
    ctx->pc = 0x2e1080u;
    // NOP
    // 0x2e1084: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e1084u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1088: 0x0  nop
    ctx->pc = 0x2e1088u;
    // NOP
    // 0x2e108c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E108Cu;
    {
        const bool branch_taken_0x2e108c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e108c) {
            ctx->pc = 0x2E10A4u;
            return;
        }
    }
    ctx->pc = 0x2E1094u;
    // 0x2e1094: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2e1094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2e1098: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e1098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e109c: 0x0  nop
    ctx->pc = 0x2e109cu;
    // NOP
    // 0x2e10a0: 0xe64000a8  swc1        $f0, 0xA8($s2)
    ctx->pc = 0x2e10a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
    ctx->pc = 0x2e10a4u;
}
