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

// Function: R121_door_event_to_100
// Address: 0x280040 - 0x280400
void R121_door_event_to_100_0x280040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R121_door_event_to_100_0x280040");
#endif

    switch (ctx->pc) {
        case 0x2800b4u: goto label_2800b4;
        case 0x2800bcu: goto label_2800bc;
        case 0x2800dcu: goto label_2800dc;
        case 0x280104u: goto label_280104;
        case 0x280118u: goto label_280118;
        case 0x2801a4u: goto label_2801a4;
        case 0x2801b0u: goto label_2801b0;
        case 0x280204u: goto label_280204;
        case 0x28024cu: goto label_28024c;
        case 0x280258u: goto label_280258;
        case 0x280284u: goto label_280284;
        case 0x2802ccu: goto label_2802cc;
        case 0x28031cu: goto label_28031c;
        case 0x28032cu: goto label_28032c;
        case 0x2803a0u: goto label_2803a0;
        case 0x2803acu: goto label_2803ac;
        case 0x2803bcu: goto label_2803bc;
        case 0x2803d4u: goto label_2803d4;
        case 0x2803dcu: goto label_2803dc;
        case 0x2803e4u: goto label_2803e4;
        default: break;
    }

    ctx->pc = 0x280040u;

    // 0x280040: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x280040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x280044: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x280044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x280048: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x280048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28004c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28004cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x280050: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x280050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x280054: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x280054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x280058: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x280058u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x28005c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28005cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x280060: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x280060u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x280064: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x280064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x280068: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x280068u;
    {
        const bool branch_taken_0x280068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280068) {
            ctx->pc = 0x2800ACu;
            goto label_2800ac;
        }
    }
    ctx->pc = 0x280070u;
    // 0x280070: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x280070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x280074: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x280074u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x280078: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x280078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28007c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28007cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x280080: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x280080u;
    {
        const bool branch_taken_0x280080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280080) {
            ctx->pc = 0x2800ACu;
            goto label_2800ac;
        }
    }
    ctx->pc = 0x280088u;
    // 0x280088: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x280088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x28008c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x28008cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280090: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x280090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x280094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x280094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280098: 0x0  nop
    ctx->pc = 0x280098u;
    // NOP
    // 0x28009c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28009cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2800a0: 0x0  nop
    ctx->pc = 0x2800a0u;
    // NOP
    // 0x2800a4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2800A4u;
    {
        const bool branch_taken_0x2800a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2800a4) {
            ctx->pc = 0x2800B4u;
            goto label_2800b4;
        }
    }
    ctx->pc = 0x2800ACu;
label_2800ac:
    // 0x2800ac: 0xc084934  jal         func_2124D0
    ctx->pc = 0x2800ACu;
    SET_GPR_U32(ctx, 31, 0x2800B4u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x2800ACu, 0x2800B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2800B4u;
label_2800b4:
    // 0x2800b4: 0xc0a1244  jal         func_284910
    ctx->pc = 0x2800B4u;
    SET_GPR_U32(ctx, 31, 0x2800BCu);
    ctx->pc = 0x284910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284910u, 0x2800B4u, 0x2800BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2800BCu;
label_2800bc:
    // 0x2800bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2800bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2800c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2800c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2800c4: 0xa022d4b1  sb          $v0, -0x2B4F($at)
    ctx->pc = 0x2800c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD4B1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD4B1u, _value); } while (0);
    // 0x2800c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2800c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2800cc: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x2800ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x2800d0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2800d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2800d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2800d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2800d8: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x2800d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
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
            goto label_2801b8;
        }
    }
    ctx->pc = 0x2801A4u;
label_2801a4:
    // 0x2801a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2801a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2801a8: 0xc084964  jal         func_212590
    ctx->pc = 0x2801A8u;
    SET_GPR_U32(ctx, 31, 0x2801B0u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x2801A8u, 0x2801B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2801B0u;
label_2801b0:
    // 0x2801b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2801b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2801b4: 0x0  nop
    ctx->pc = 0x2801b4u;
    // NOP
label_2801b8:
    // 0x2801b8: 0x2e220078  sltiu       $v0, $s1, 0x78
    ctx->pc = 0x2801b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)120) ? 1 : 0);
    // 0x2801bc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2801BCu;
    {
        const bool branch_taken_0x2801bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2801bc) {
            ctx->pc = 0x2801A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2801a4;
        }
    }
    ctx->pc = 0x2801C4u;
    // 0x2801c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2801c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2801c8: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x2801c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x2801cc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2801ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2801d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2801d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2801d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2801d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2801d8: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x2801d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x2801dc: 0xc60001a4  lwc1        $f0, 0x1A4($s0)
    ctx->pc = 0x2801dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2801e0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2801e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2801e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2801e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2801e8: 0x0  nop
    ctx->pc = 0x2801e8u;
    // NOP
    // 0x2801ec: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2801ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2801f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2801f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2801f4: 0x0  nop
    ctx->pc = 0x2801f4u;
    // NOP
    // 0x2801f8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2801f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2801fc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2801FCu;
    {
        const bool branch_taken_0x2801fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2801fc) {
            ctx->pc = 0x280258u;
            goto label_280258;
        }
    }
    ctx->pc = 0x280204u;
label_280204:
    // 0x280204: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x280204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280208: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x280208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28020c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28020cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x280210: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x280210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x280214: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x280214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280218: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x280218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
    // 0x28021c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x28021cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x280220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x280220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280224: 0x0  nop
    ctx->pc = 0x280224u;
    // NOP
    // 0x280228: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x280228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28022c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x28022cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x280230: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x280230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280234: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x280234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280238: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x280238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28023c: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x28023cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x280240: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x280240u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x280244: 0xc056518  jal         func_159460
    ctx->pc = 0x280244u;
    SET_GPR_U32(ctx, 31, 0x28024Cu);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x280244u, 0x28024Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28024Cu;
label_28024c:
    // 0x28024c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28024cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280250: 0xc084964  jal         func_212590
    ctx->pc = 0x280250u;
    SET_GPR_U32(ctx, 31, 0x280258u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x280250u, 0x280258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280258u;
label_280258:
    // 0x280258: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x280258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28025c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x28025cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x280260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x280260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280264: 0x0  nop
    ctx->pc = 0x280264u;
    // NOP
    // 0x280268: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x280268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28026c: 0x0  nop
    ctx->pc = 0x28026cu;
    // NOP
    // 0x280270: 0x4501ffe4  bc1t        . + 4 + (-0x1C << 2)
    ctx->pc = 0x280270u;
    {
        const bool branch_taken_0x280270 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280270) {
            ctx->pc = 0x280204u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280204;
        }
    }
    ctx->pc = 0x280278u;
    // 0x280278: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x280278u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28027c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x28027Cu;
    {
        const bool branch_taken_0x28027c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28027c) {
            ctx->pc = 0x280330u;
            goto label_280330;
        }
    }
    ctx->pc = 0x280284u;
label_280284:
    // 0x280284: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x280284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280288: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x280288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28028c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28028cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x280290: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x280290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x280294: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x280294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280298: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x280298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x28029c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x28029cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2802a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2802a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2802a4: 0x0  nop
    ctx->pc = 0x2802a4u;
    // NOP
    // 0x2802a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2802a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2802ac: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2802acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2802b0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2802b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2802b4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2802b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2802b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2802b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2802bc: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x2802bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x2802c0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2802c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2802c4: 0xc056518  jal         func_159460
    ctx->pc = 0x2802C4u;
    SET_GPR_U32(ctx, 31, 0x2802CCu);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x2802C4u, 0x2802CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2802CCu;
label_2802cc:
    // 0x2802cc: 0x16400014  bnez        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2802CCu;
    {
        const bool branch_taken_0x2802cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2802cc) {
            ctx->pc = 0x280320u;
            goto label_280320;
        }
    }
    ctx->pc = 0x2802D4u;
    // 0x2802d4: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2802d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2802d8: 0x3c024592  lui         $v0, 0x4592
    ctx->pc = 0x2802d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17810 << 16));
    // 0x2802dc: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x2802dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x2802e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2802e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2802e4: 0x0  nop
    ctx->pc = 0x2802e4u;
    // NOP
    // 0x2802e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2802e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2802ec: 0x0  nop
    ctx->pc = 0x2802ecu;
    // NOP
    // 0x2802f0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2802F0u;
    {
        const bool branch_taken_0x2802f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2802f0) {
            ctx->pc = 0x280320u;
            goto label_280320;
        }
    }
    ctx->pc = 0x2802F8u;
    // 0x2802f8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2802f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2802fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2802fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280300: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x280300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280304: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280304u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280308: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x280308u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28030c: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x28030cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x280310: 0x240a006e  addiu       $t2, $zero, 0x6E
    ctx->pc = 0x280310u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x280314: 0xc059190  jal         func_164640
    ctx->pc = 0x280314u;
    SET_GPR_U32(ctx, 31, 0x28031Cu);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x280314u, 0x28031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28031Cu;
label_28031c:
    // 0x28031c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x28031cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_280320:
    // 0x280320: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x280320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280324: 0xc084964  jal         func_212590
    ctx->pc = 0x280324u;
    SET_GPR_U32(ctx, 31, 0x28032Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x280324u, 0x28032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28032Cu;
label_28032c:
    // 0x28032c: 0x0  nop
    ctx->pc = 0x28032cu;
    // NOP
label_280330:
    // 0x280330: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x280330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280334: 0x3c0245bb  lui         $v0, 0x45BB
    ctx->pc = 0x280334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17851 << 16));
    // 0x280338: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x280338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x28033c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28033cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280340: 0x0  nop
    ctx->pc = 0x280340u;
    // NOP
    // 0x280344: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x280344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280348: 0x0  nop
    ctx->pc = 0x280348u;
    // NOP
    // 0x28034c: 0x4501ffcd  bc1t        . + 4 + (-0x33 << 2)
    ctx->pc = 0x28034Cu;
    {
        const bool branch_taken_0x28034c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28034c) {
            ctx->pc = 0x280284u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280284;
        }
    }
    ctx->pc = 0x280354u;
    // 0x280354: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x280354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x280358: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x280358u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x28035c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28035cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x280360: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x280360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x280364: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x280364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x280368: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x280368u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x28036c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x28036cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x280370: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x280370u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x280374: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x280374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x280378: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x280378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28037c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x28037cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x280380: 0xac22dbc8  sw          $v0, -0x2438($at)
    ctx->pc = 0x280380u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC8u, _value); } while (0);
    // 0x280384: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x280384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x280388: 0x8c22dbc8  lw          $v0, -0x2438($at)
    ctx->pc = 0x280388u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x28038c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x28038cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x280390: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x280390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x280394: 0xac22dbc8  sw          $v0, -0x2438($at)
    ctx->pc = 0x280394u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC8u, _value); } while (0);
    // 0x280398: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x280398u;
    {
        const bool branch_taken_0x280398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280398) {
            ctx->pc = 0x2803B0u;
            goto label_2803b0;
        }
    }
    ctx->pc = 0x2803A0u;
label_2803a0:
    // 0x2803a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2803a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2803a4: 0xc084964  jal         func_212590
    ctx->pc = 0x2803A4u;
    SET_GPR_U32(ctx, 31, 0x2803ACu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x2803A4u, 0x2803ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803ACu;
label_2803ac:
    // 0x2803ac: 0x0  nop
    ctx->pc = 0x2803acu;
    // NOP
label_2803b0:
    // 0x2803b0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2803b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2803b4: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x2803B4u;
    SET_GPR_U32(ctx, 31, 0x2803BCu);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x2803B4u, 0x2803BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803BCu;
label_2803bc:
    // 0x2803bc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2803bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2803c0: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2803C0u;
    {
        const bool branch_taken_0x2803c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2803c0) {
            ctx->pc = 0x2803A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2803a0;
        }
    }
    ctx->pc = 0x2803C8u;
    // 0x2803c8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2803c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2803cc: 0xc0a12a8  jal         func_284AA0
    ctx->pc = 0x2803CCu;
    SET_GPR_U32(ctx, 31, 0x2803D4u);
    ctx->pc = 0x284AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284AA0u, 0x2803CCu, 0x2803D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803D4u;
label_2803d4:
    // 0x2803d4: 0xc0a128c  jal         func_284A30
    ctx->pc = 0x2803D4u;
    SET_GPR_U32(ctx, 31, 0x2803DCu);
    ctx->pc = 0x284A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284A30u, 0x2803D4u, 0x2803DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803DCu;
label_2803dc:
    // 0x2803dc: 0xc084934  jal         func_2124D0
    ctx->pc = 0x2803DCu;
    SET_GPR_U32(ctx, 31, 0x2803E4u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x2803DCu, 0x2803E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803E4u;
label_2803e4:
    // 0x2803e4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2803e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2803e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2803e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2803ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2803ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2803f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2803f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2803f4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2803f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2803f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2803F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2803F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280400u;
}
