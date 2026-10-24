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

// Function: Em0f_R1_atk_j
// Address: 0x30e050 - 0x30e260
void Em0f_R1_atk_j_0x30e050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R1_atk_j_0x30e050");
#endif

    switch (ctx->pc) {
        case 0x30e0a8u: goto label_30e0a8;
        case 0x30e13cu: goto label_30e13c;
        case 0x30e17cu: goto label_30e17c;
        case 0x30e1bcu: goto label_30e1bc;
        case 0x30e1ccu: goto label_30e1cc;
        case 0x30e1d8u: goto label_30e1d8;
        case 0x30e1e8u: goto label_30e1e8;
        case 0x30e1f4u: goto label_30e1f4;
        default: break;
    }

    ctx->pc = 0x30e050u;

    // 0x30e050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30e050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30e054: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x30e054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x30e058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30e058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30e05c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x30e05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x30e060: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e064: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x30e064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30e068: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30e068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30e06c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e070: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x30E070u;
    {
        const bool branch_taken_0x30e070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30e070) {
            ctx->pc = 0x30E0DCu;
            goto label_30e0dc;
        }
    }
    ctx->pc = 0x30E078u;
    // 0x30e078: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E078u;
    {
        const bool branch_taken_0x30e078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e078) {
            ctx->pc = 0x30E088u;
            goto label_30e088;
        }
    }
    ctx->pc = 0x30E080u;
    // 0x30e080: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x30E080u;
    {
        const bool branch_taken_0x30e080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e080) {
            ctx->pc = 0x30E24Cu;
            goto label_30e24c;
        }
    }
    ctx->pc = 0x30E088u;
label_30e088:
    // 0x30e088: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e08c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e090: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30e090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30e094: 0x24062811  addiu       $a2, $zero, 0x2811
    ctx->pc = 0x30e094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10257));
    // 0x30e098: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30e098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e09c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30e09cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30e0a0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30E0A0u;
    SET_GPR_U32(ctx, 31, 0x30E0A8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30E0A0u, 0x30E0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E0A8u;
label_30e0a8:
    // 0x30e0a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e0ac: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30e0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30e0b0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x30e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x30e0b4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30e0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e0b8: 0xac821338  sw          $v0, 0x1338($a0)
    ctx->pc = 0x30e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 2));
    // 0x30e0bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e0c0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30e0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e0c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e0c8: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30e0c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e0cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e0d0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30e0d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30e0d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30e0d8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30e0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30e0dc:
    // 0x30e0dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e0e0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30e0e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30e0e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30e0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30e0e8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x30e0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x30e0ec: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30E0ECu;
    {
        const bool branch_taken_0x30e0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e0ec) {
            ctx->pc = 0x30E160u;
            goto label_30e160;
        }
    }
    ctx->pc = 0x30E0F4u;
    // 0x30e0f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e0f8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x30e0f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x30e0fc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30E0FCu;
    {
        const bool branch_taken_0x30e0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e0fc) {
            ctx->pc = 0x30E160u;
            goto label_30e160;
        }
    }
    ctx->pc = 0x30E104u;
    // 0x30e104: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30e104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30e108: 0x24429980  addiu       $v0, $v0, -0x6680
    ctx->pc = 0x30e108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941056));
    // 0x30e10c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x30e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30e110: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30e110u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399980u));
    // 0x30e114: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30e114u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30e118: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e11c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30e120: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e124: 0x24450840  addiu       $a1, $v0, 0x840
    ctx->pc = 0x30e124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x30e128: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x30e128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30e12c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x30e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x30e130: 0x24478d50  addiu       $a3, $v0, -0x72B0
    ctx->pc = 0x30e130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937936));
    // 0x30e134: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x30E134u;
    SET_GPR_U32(ctx, 31, 0x30E13Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x30E134u, 0x30E13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E13Cu;
label_30e13c:
    // 0x30e13c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x30e13cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30e140: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30E140u;
    {
        const bool branch_taken_0x30e140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e140) {
            ctx->pc = 0x30E160u;
            goto label_30e160;
        }
    }
    ctx->pc = 0x30E148u;
    // 0x30e148: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e14c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e150: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x30e150u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30e154: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e158: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e15c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30e15cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_30e160:
    // 0x30e160: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e164: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x30e164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x30e168: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30E168u;
    {
        const bool branch_taken_0x30e168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e168) {
            ctx->pc = 0x30E184u;
            goto label_30e184;
        }
    }
    ctx->pc = 0x30E170u;
    // 0x30e170: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e174: 0xc0c4544  jal         func_311510
    ctx->pc = 0x30E174u;
    SET_GPR_U32(ctx, 31, 0x30E17Cu);
    ctx->pc = 0x311510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311510u, 0x30E174u, 0x30E17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E17Cu;
label_30e17c:
    // 0x30e17c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e180: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30e180u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_30e184:
    // 0x30e184: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x30e184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x30e188: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30e188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30e18c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30e190: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30e190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30e194: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x30e194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x30e198: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x30e198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30e19c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e1a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30e1a4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x30e1a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e1a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e1a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e1ac: 0x24460330  addiu       $a2, $v0, 0x330
    ctx->pc = 0x30e1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
    // 0x30e1b0: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x30e1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30e1b4: 0xc086488  jal         func_219220
    ctx->pc = 0x30E1B4u;
    SET_GPR_U32(ctx, 31, 0x30E1BCu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x30E1B4u, 0x30E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E1BCu;
label_30e1bc:
    // 0x30e1bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e1c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e1c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e1c4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30E1C4u;
    SET_GPR_U32(ctx, 31, 0x30E1CCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30E1C4u, 0x30E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E1CCu;
label_30e1cc:
    // 0x30e1cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e1d0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30E1D0u;
    SET_GPR_U32(ctx, 31, 0x30E1D8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30E1D0u, 0x30E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E1D8u;
label_30e1d8:
    // 0x30e1d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e1dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e1dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e1e0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30E1E0u;
    SET_GPR_U32(ctx, 31, 0x30E1E8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30E1E0u, 0x30E1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E1E8u;
label_30e1e8:
    // 0x30e1e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e1ec: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30E1ECu;
    SET_GPR_U32(ctx, 31, 0x30E1F4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30E1ECu, 0x30E1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E1F4u;
label_30e1f4:
    // 0x30e1f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e1f8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30e1f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30e1fc: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30E1FCu;
    {
        const bool branch_taken_0x30e1fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e1fc) {
            ctx->pc = 0x30E24Cu;
            goto label_30e24c;
        }
    }
    ctx->pc = 0x30E204u;
    // 0x30e204: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x30e204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e208: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30e208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30e20c: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x30e20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x30e210: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30e210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30e214: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30e214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30e218: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30e218u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x30e21c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e220: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e224: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30e224u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30e228: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30e228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e22c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e230: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30e230u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30e234: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e238: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30e238u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e23c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e240: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30e240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e244: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e248: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30e248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30e24c:
    // 0x30e24c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x30e24cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e250: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30e250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e254: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x30e254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30e258: 0x3e00008  jr          $ra
    ctx->pc = 0x30E258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E260u;
}
