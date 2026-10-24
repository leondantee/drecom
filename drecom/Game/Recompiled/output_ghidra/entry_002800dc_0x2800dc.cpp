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

// Function: entry_002800dc
// Address: 0x2800dc - 0x2801a4
void entry_002800dc_0x2800dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002800dc_0x2800dc");
#endif

    switch (ctx->pc) {
        case 0x280104u: goto label_280104;
        case 0x280118u: goto label_280118;
        default: break;
    }

    ctx->pc = 0x2800dcu;

label_2800dc:
    // 0x2800dc: 0x3c02be19  lui         $v0, 0xBE19
    ctx->pc = 0x2800dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48665 << 16));
    // 0x2800e0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2800e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2800e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2800e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2800e8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2800e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2800ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2800ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2800f0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2800f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2800f4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2800f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2800f8: 0xc42ddc94  lwc1        $f13, -0x236C($at)
    ctx->pc = 0x2800f8u;
    { uint32_t bits = FAST_READ32(0x3EDC94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2800fc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2800FCu;
    SET_GPR_U32(ctx, 31, 0x280104u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2800FCu, 0x280104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280104u;
label_280104:
    // 0x280104: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x280104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x280108: 0xe420dc94  swc1        $f0, -0x236C($at)
    ctx->pc = 0x280108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDC94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDC94u, _value); } while (0); }
    // 0x28010c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28010cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280110: 0xc084964  jal         func_212590
    ctx->pc = 0x280110u;
    SET_GPR_U32(ctx, 31, 0x280118u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x280110u, 0x280118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280118u;
label_280118:
    // 0x280118: 0x3c02be19  lui         $v0, 0xBE19
    ctx->pc = 0x280118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48665 << 16));
    // 0x28011c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x28011cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x280120: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280124: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x280124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x280128: 0xc420dc94  lwc1        $f0, -0x236C($at)
    ctx->pc = 0x280128u;
    { uint32_t bits = FAST_READ32(0x3EDC94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28012c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x28012cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280130: 0x0  nop
    ctx->pc = 0x280130u;
    // NOP
    // 0x280134: 0x4500ffe9  bc1f        . + 4 + (-0x17 << 2)
    ctx->pc = 0x280134u;
    {
        const bool branch_taken_0x280134 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280134) {
            ctx->pc = 0x2800DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2800dc;
        }
    }
    ctx->pc = 0x28013Cu;
    // 0x28013c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28013cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x280140: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x280140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x280144: 0xa022dbc0  sb          $v0, -0x2440($at)
    ctx->pc = 0x280144u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC0u, _value); } while (0);
    // 0x280148: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x280148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x28014c: 0xa020dbc1  sb          $zero, -0x243F($at)
    ctx->pc = 0x28014cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC1u, _value); } while (0);
    // 0x280150: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x280150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x280154: 0xa020dbc2  sb          $zero, -0x243E($at)
    ctx->pc = 0x280154u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC2u, _value); } while (0);
    // 0x280158: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x280158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x28015c: 0xa020dbc3  sb          $zero, -0x243D($at)
    ctx->pc = 0x28015cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC3u, _value); } while (0);
    // 0x280160: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x280160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
    // 0x280164: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x280164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x280168: 0xac22dbc4  sw          $v0, -0x243C($at)
    ctx->pc = 0x280168u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC4u, _value); } while (0);
    // 0x28016c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x28016cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x280170: 0x8c22dbc8  lw          $v0, -0x2438($at)
    ctx->pc = 0x280170u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x280174: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x280174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x280178: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x280178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x28017c: 0xac22dbc8  sw          $v0, -0x2438($at)
    ctx->pc = 0x28017cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC8u, _value); } while (0);
    // 0x280180: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x280180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x280184: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x280184u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x280188: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x280188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x28018c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28018cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x280190: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x280190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x280194: 0xac22dbc8  sw          $v0, -0x2438($at)
    ctx->pc = 0x280194u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC8u, _value); } while (0);
    // 0x280198: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x280198u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28019c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28019Cu;
    {
        const bool branch_taken_0x28019c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28019c) {
            ctx->pc = 0x2801B8u;
            return;
        }
    }
    ctx->pc = 0x2801A4u;
}
