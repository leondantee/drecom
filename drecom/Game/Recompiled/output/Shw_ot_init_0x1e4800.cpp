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

// Function: Shw_ot_init
// Address: 0x1e4800 - 0x1e4ad4
void Shw_ot_init_0x1e4800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Shw_ot_init_0x1e4800");
#endif

    switch (ctx->pc) {
        case 0x1e4830u: goto label_1e4830;
        case 0x1e4844u: goto label_1e4844;
        case 0x1e4858u: goto label_1e4858;
        default: break;
    }

    ctx->pc = 0x1e4800u;

    // 0x1e4800: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e4800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e4804: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x1e4804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1e4808: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e4808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e480c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e480cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e4810: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e4810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e4814: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e4818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e481c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e481cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1e4820: 0x24500610  addiu       $s0, $v0, 0x610
    ctx->pc = 0x1e4820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    // 0x1e4824: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e4824u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e4828: 0xc07a074  jal         func_1E81D0
    ctx->pc = 0x1E4828u;
    SET_GPR_U32(ctx, 31, 0x1E4830u);
    ctx->pc = 0x1E81D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E81D0u, 0x1E4828u, 0x1E4830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4830u;
label_1e4830:
    // 0x1e4830: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1e4830u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e4834: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1e4834u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e4838: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e4838u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e483c: 0xc07a0e0  jal         func_1E8380
    ctx->pc = 0x1E483Cu;
    SET_GPR_U32(ctx, 31, 0x1E4844u);
    ctx->pc = 0x1E8380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8380u, 0x1E483Cu, 0x1E4844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4844u;
label_1e4844:
    // 0x1e4844: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1e4844u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e4848: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x1e4848u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1e484c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e484cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4850: 0xc07a0e0  jal         func_1E8380
    ctx->pc = 0x1E4850u;
    SET_GPR_U32(ctx, 31, 0x1E4858u);
    ctx->pc = 0x1E8380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8380u, 0x1E4850u, 0x1E4858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4858u;
label_1e4858:
    // 0x1e4858: 0x2309023  subu        $s2, $s1, $s0
    ctx->pc = 0x1e4858u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1e485c: 0x2919823  subu        $s3, $s4, $s1
    ctx->pc = 0x1e485cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1e4860: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e4860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e4864: 0x121902  srl         $v1, $s2, 4
    ctx->pc = 0x1e4864u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x1e4868: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e4868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e486c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1e486cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1e4870: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1e4870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1e4874: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1e4874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e4878: 0x10193c  dsll32      $v1, $s0, 4
    ctx->pc = 0x1e4878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 4));
    // 0x1e487c: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1e487cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1e4880: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e4880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e4884: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e4884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e4888: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e4888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e488c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e488cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e4890: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e4890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e4894: 0xfc230a10  sd          $v1, 0xA10($at)
    ctx->pc = 0x1e4894u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600A10u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x600A10u, _value); } while (0);
    // 0x1e4898: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e4898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e489c: 0xac200a18  sw          $zero, 0xA18($at)
    ctx->pc = 0x1e489cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x600A18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A18u, _value); } while (0);
    // 0x1e48a0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e48a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e48a4: 0x122102  srl         $a0, $s2, 4
    ctx->pc = 0x1e48a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x1e48a8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1e48a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1e48ac: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e48acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e48b0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e48b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e48b4: 0xac230a1c  sw          $v1, 0xA1C($at)
    ctx->pc = 0x1e48b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600A1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A1Cu, _value); } while (0);
    // 0x1e48b8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e48bc: 0x121902  srl         $v1, $s2, 4
    ctx->pc = 0x1e48bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x1e48c0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e48c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e48c4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1e48c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1e48c8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1e48c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1e48cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1e48ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e48d0: 0x10193c  dsll32      $v1, $s0, 4
    ctx->pc = 0x1e48d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 4));
    // 0x1e48d4: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1e48d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1e48d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e48d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e48dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e48dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e48e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e48e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e48e4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e48e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e48e8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e48e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e48ec: 0xfc230a50  sd          $v1, 0xA50($at)
    ctx->pc = 0x1e48ecu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600A50u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x600A50u, _value); } while (0);
    // 0x1e48f0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e48f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e48f4: 0xac200a58  sw          $zero, 0xA58($at)
    ctx->pc = 0x1e48f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x600A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A58u, _value); } while (0);
    // 0x1e48f8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e48f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e48fc: 0x122102  srl         $a0, $s2, 4
    ctx->pc = 0x1e48fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x1e4900: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1e4900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1e4904: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e4904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e4908: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e4908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e490c: 0xac230a5c  sw          $v1, 0xA5C($at)
    ctx->pc = 0x1e490cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600A5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A5Cu, _value); } while (0);
    // 0x1e4910: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e4910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1e4914: 0x24630a30  addiu       $v1, $v1, 0xA30
    ctx->pc = 0x1e4914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2608));
    // 0x1e4918: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x1e4918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1e491c: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1e491cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1e4920: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e4920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e4924: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e4924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e4928: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e4928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e492c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1e492cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1e4930: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e4930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e4934: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e4934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e4938: 0xfc230a20  sd          $v1, 0xA20($at)
    ctx->pc = 0x1e4938u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600A20u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x600A20u, _value); } while (0);
    // 0x1e493c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e493cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e4940: 0xac200a28  sw          $zero, 0xA28($at)
    ctx->pc = 0x1e4940u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x600A28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A28u, _value); } while (0);
    // 0x1e4944: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e4944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e4948: 0xac200a2c  sw          $zero, 0xA2C($at)
    ctx->pc = 0x1e4948u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x600A2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A2Cu, _value); } while (0);
    // 0x1e494c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e494cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1e4950: 0x24630a70  addiu       $v1, $v1, 0xA70
    ctx->pc = 0x1e4950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2672));
    // 0x1e4954: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x1e4954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1e4958: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1e4958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1e495c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e495cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e4960: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e4960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e4964: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e4964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e4968: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1e4968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1e496c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e496cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e4970: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e4970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e4974: 0xfc230a60  sd          $v1, 0xA60($at)
    ctx->pc = 0x1e4974u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600A60u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x600A60u, _value); } while (0);
    // 0x1e4978: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e4978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e497c: 0xac200a68  sw          $zero, 0xA68($at)
    ctx->pc = 0x1e497cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x600A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A68u, _value); } while (0);
    // 0x1e4980: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e4980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e4984: 0xac200a6c  sw          $zero, 0xA6C($at)
    ctx->pc = 0x1e4984u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x600A6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A6Cu, _value); } while (0);
    // 0x1e4988: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e4988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e498c: 0x131902  srl         $v1, $s3, 4
    ctx->pc = 0x1e498cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 4));
    // 0x1e4990: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e4990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e4994: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1e4994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1e4998: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1e4998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1e499c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1e499cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e49a0: 0x14193c  dsll32      $v1, $s4, 4
    ctx->pc = 0x1e49a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 4));
    // 0x1e49a4: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1e49a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1e49a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e49a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e49ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e49acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e49b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e49b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e49b4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e49b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e49b8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e49b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e49bc: 0xfc230a30  sd          $v1, 0xA30($at)
    ctx->pc = 0x1e49bcu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600A30u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x600A30u, _value); } while (0);
    // 0x1e49c0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e49c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e49c4: 0xac200a38  sw          $zero, 0xA38($at)
    ctx->pc = 0x1e49c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x600A38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A38u, _value); } while (0);
    // 0x1e49c8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e49c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e49cc: 0x132102  srl         $a0, $s3, 4
    ctx->pc = 0x1e49ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), 4));
    // 0x1e49d0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1e49d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1e49d4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e49d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e49d8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e49d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e49dc: 0xac230a3c  sw          $v1, 0xA3C($at)
    ctx->pc = 0x1e49dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A3Cu, _value); } while (0);
    // 0x1e49e0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e49e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e49e4: 0x131902  srl         $v1, $s3, 4
    ctx->pc = 0x1e49e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 4));
    // 0x1e49e8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e49e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e49ec: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1e49ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1e49f0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1e49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1e49f4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1e49f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e49f8: 0x11193c  dsll32      $v1, $s1, 4
    ctx->pc = 0x1e49f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 4));
    // 0x1e49fc: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1e49fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1e4a00: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e4a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e4a04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e4a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e4a08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e4a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e4a0c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e4a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e4a10: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e4a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e4a14: 0xfc230a70  sd          $v1, 0xA70($at)
    ctx->pc = 0x1e4a14u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600A70u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x600A70u, _value); } while (0);
    // 0x1e4a18: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e4a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e4a1c: 0xac200a78  sw          $zero, 0xA78($at)
    ctx->pc = 0x1e4a1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x600A78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A78u, _value); } while (0);
    // 0x1e4a20: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e4a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e4a24: 0x132102  srl         $a0, $s3, 4
    ctx->pc = 0x1e4a24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), 4));
    // 0x1e4a28: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1e4a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1e4a2c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e4a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e4a30: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e4a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e4a34: 0xac230a7c  sw          $v1, 0xA7C($at)
    ctx->pc = 0x1e4a34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600A7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A7Cu, _value); } while (0);
    // 0x1e4a38: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1e4a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1e4a3c: 0x2463dfc0  addiu       $v1, $v1, -0x2040
    ctx->pc = 0x1e4a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959040));
    // 0x1e4a40: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x1e4a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1e4a44: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1e4a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1e4a48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e4a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e4a4c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e4a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e4a50: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e4a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e4a54: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1e4a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1e4a58: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e4a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e4a5c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e4a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e4a60: 0xfc230a40  sd          $v1, 0xA40($at)
    ctx->pc = 0x1e4a60u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600A40u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x600A40u, _value); } while (0);
    // 0x1e4a64: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e4a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e4a68: 0xac200a48  sw          $zero, 0xA48($at)
    ctx->pc = 0x1e4a68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x600A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A48u, _value); } while (0);
    // 0x1e4a6c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e4a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e4a70: 0xac200a4c  sw          $zero, 0xA4C($at)
    ctx->pc = 0x1e4a70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x600A4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A4Cu, _value); } while (0);
    // 0x1e4a74: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1e4a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1e4a78: 0x2463efd0  addiu       $v1, $v1, -0x1030
    ctx->pc = 0x1e4a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963152));
    // 0x1e4a7c: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x1e4a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1e4a80: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1e4a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1e4a84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e4a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e4a88: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e4a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e4a8c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e4a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e4a90: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1e4a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1e4a94: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e4a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e4a98: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e4a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e4a9c: 0xfc230a80  sd          $v1, 0xA80($at)
    ctx->pc = 0x1e4a9cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600A80u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x600A80u, _value); } while (0);
    // 0x1e4aa0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e4aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e4aa4: 0xac200a88  sw          $zero, 0xA88($at)
    ctx->pc = 0x1e4aa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x600A88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A88u, _value); } while (0);
    // 0x1e4aa8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e4aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e4aac: 0xac200a8c  sw          $zero, 0xA8C($at)
    ctx->pc = 0x1e4aacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x600A8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A8Cu, _value); } while (0);
    // 0x1e4ab0: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x1e4ab0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e4ab4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e4ab4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4ab8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e4ab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4abc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e4abcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4ac0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4ac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4ac8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1e4ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e4acc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4AD4u;
}
