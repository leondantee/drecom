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

// Function: entry_0021de64
// Address: 0x21de64 - 0x21df0c
void entry_0021de64_0x21de64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021de64_0x21de64");
#endif

    switch (ctx->pc) {
        case 0x21dee4u: goto label_21dee4;
        case 0x21defcu: goto label_21defc;
        default: break;
    }

    ctx->pc = 0x21de64u;

    // 0x21de64: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x21de64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21de68: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x21de68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x21de6c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x21de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x21de70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21de70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21de74: 0x0  nop
    ctx->pc = 0x21de74u;
    // NOP
    // 0x21de78: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x21de78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x21de7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21de7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21de80: 0x0  nop
    ctx->pc = 0x21de80u;
    // NOP
    // 0x21de84: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x21de84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x21de88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21de88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21de8c: 0x0  nop
    ctx->pc = 0x21de8cu;
    // NOP
    // 0x21de90: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x21de90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x21de94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21de94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21de98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21de98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21de9c: 0x0  nop
    ctx->pc = 0x21de9cu;
    // NOP
    // 0x21dea0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x21dea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x21dea4: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x21dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x21dea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21dea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21deac: 0x0  nop
    ctx->pc = 0x21deacu;
    // NOP
    // 0x21deb0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x21deb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x21deb4: 0xa7a00094  sh          $zero, 0x94($sp)
    ctx->pc = 0x21deb4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x21deb8: 0xa3a00096  sb          $zero, 0x96($sp)
    ctx->pc = 0x21deb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 150), (uint8_t)GPR_U32(ctx, 0));
    // 0x21debc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21dec0: 0xa3a20097  sb          $v0, 0x97($sp)
    ctx->pc = 0x21dec0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 151), (uint8_t)GPR_U32(ctx, 2));
    // 0x21dec4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x21dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21dec8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x21dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21decc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x21deccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21ded0: 0x246500c0  addiu       $a1, $v1, 0xC0
    ctx->pc = 0x21ded0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x21ded4: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x21ded4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21ded8: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x21ded8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x21dedc: 0xc059e1c  jal         func_167870
    ctx->pc = 0x21DEDCu;
    SET_GPR_U32(ctx, 31, 0x21DEE4u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x21DEDCu, 0x21DEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DEE4u;
label_21dee4:
    // 0x21dee4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x21dee4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21dee8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x21dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x21deec: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x21deecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x21def0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x21def0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21def4: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x21DEF4u;
    SET_GPR_U32(ctx, 31, 0x21DEFCu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x21DEF4u, 0x21DEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DEFCu;
label_21defc:
    // 0x21defc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DEFCu;
    {
        const bool branch_taken_0x21defc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21defc) {
            ctx->pc = 0x21DF0Cu;
            return;
        }
    }
    ctx->pc = 0x21DF04u;
    // 0x21df04: 0x1280006e  beqz        $s4, . + 4 + (0x6E << 2)
    ctx->pc = 0x21DF04u;
    {
        const bool branch_taken_0x21df04 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x21df04) {
            ctx->pc = 0x21E0C0u;
            return;
        }
    }
    ctx->pc = 0x21DF0Cu;
}
