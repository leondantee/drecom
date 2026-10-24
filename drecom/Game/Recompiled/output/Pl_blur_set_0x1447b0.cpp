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

// Function: Pl_blur_set
// Address: 0x1447b0 - 0x144ae4
void Pl_blur_set_0x1447b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_blur_set_0x1447b0");
#endif

    switch (ctx->pc) {
        case 0x1447e8u: goto label_1447e8;
        case 0x1447f8u: goto label_1447f8;
        case 0x144808u: goto label_144808;
        case 0x144844u: goto label_144844;
        case 0x14490cu: goto label_14490c;
        case 0x144920u: goto label_144920;
        case 0x144934u: goto label_144934;
        case 0x144978u: goto label_144978;
        case 0x144a04u: goto label_144a04;
        case 0x144a48u: goto label_144a48;
        default: break;
    }

    ctx->pc = 0x1447b0u;

    // 0x1447b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1447b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1447b4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x1447b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1447b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1447b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1447bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1447bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1447c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1447c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1447c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1447c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1447c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1447c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1447cc: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1447ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x1447d0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1447d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1447d4: 0x24549240  addiu       $s4, $v0, -0x6DC0
    ctx->pc = 0x1447d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
    // 0x1447d8: 0x26840234  addiu       $a0, $s4, 0x234
    ctx->pc = 0x1447d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 564));
    // 0x1447dc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1447dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1447e0: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x1447E0u;
    SET_GPR_U32(ctx, 31, 0x1447E8u);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x1447E0u, 0x1447E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447E8u;
label_1447e8:
    // 0x1447e8: 0x2684023c  addiu       $a0, $s4, 0x23C
    ctx->pc = 0x1447e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 572));
    // 0x1447ec: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1447ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1447f0: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x1447F0u;
    SET_GPR_U32(ctx, 31, 0x1447F8u);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x1447F0u, 0x1447F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447F8u;
label_1447f8:
    // 0x1447f8: 0x26840244  addiu       $a0, $s4, 0x244
    ctx->pc = 0x1447f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 580));
    // 0x1447fc: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1447fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x144800: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x144800u;
    SET_GPR_U32(ctx, 31, 0x144808u);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x144800u, 0x144808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144808u;
label_144808:
    // 0x144808: 0x8e920244  lw          $s2, 0x244($s4)
    ctx->pc = 0x144808u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 580)));
    // 0x14480c: 0x8e930248  lw          $s3, 0x248($s4)
    ctx->pc = 0x14480cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 584)));
    // 0x144810: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x144810u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x144814: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x144814u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x144818: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x144818u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14481c: 0x3c0260f0  lui         $v0, 0x60F0
    ctx->pc = 0x14481cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24816 << 16));
    // 0x144820: 0x3447f0f0  ori         $a3, $v0, 0xF0F0
    ctx->pc = 0x144820u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61680);
    // 0x144824: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x144824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x144828: 0x34488080  ori         $t0, $v0, 0x8080
    ctx->pc = 0x144828u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x14482c: 0x3c0260f0  lui         $v0, 0x60F0
    ctx->pc = 0x14482cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24816 << 16));
    // 0x144830: 0x3449f0f0  ori         $t1, $v0, 0xF0F0
    ctx->pc = 0x144830u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61680);
    // 0x144834: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x144834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x144838: 0x344a8080  ori         $t2, $v0, 0x8080
    ctx->pc = 0x144838u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x14483c: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x14483Cu;
    SET_GPR_U32(ctx, 31, 0x144844u);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x14483Cu, 0x144844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144844u;
label_144844:
    // 0x144844: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x144844u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x144848: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x144848u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14484c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14484cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x144850: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x144850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x144854: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x144854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x144858: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x144858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x14485c: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x14485cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x144860: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x144860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x144864: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x144864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x144868: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x144868u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x14486c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14486cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x144870: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x144870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x144874: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x144874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x144878: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x144878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x14487c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x14487cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x144880: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x144880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x144884: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x144884u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x144888: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x144888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14488c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x14488cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x144890: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x144890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x144894: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x144894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x144898: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x144898u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x14489c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x14489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1448a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1448a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1448a4: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1448a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1448a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1448a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1448ac: 0xfe220020  sd          $v0, 0x20($s1)
    ctx->pc = 0x1448acu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 2));
    // 0x1448b0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1448b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1448b4: 0x34423001  ori         $v0, $v0, 0x3001
    ctx->pc = 0x1448b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12289);
    // 0x1448b8: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x1448b8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x1448bc: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1448bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1448c0: 0x34423001  ori         $v0, $v0, 0x3001
    ctx->pc = 0x1448c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12289);
    // 0x1448c4: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x1448c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x1448c8: 0x3c02610e  lui         $v0, 0x610E
    ctx->pc = 0x1448c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24846 << 16));
    // 0x1448cc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1448ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1448d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1448d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1448d4: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x1448d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x1448d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1448d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1448dc: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x1448dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x1448e0: 0x3c02610e  lui         $v0, 0x610E
    ctx->pc = 0x1448e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24846 << 16));
    // 0x1448e4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1448e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1448e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1448e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1448ec: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x1448ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x1448f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1448f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1448f4: 0xfe220070  sd          $v0, 0x70($s1)
    ctx->pc = 0x1448f4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
    // 0x1448f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1448f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1448fc: 0x24440234  addiu       $a0, $v0, 0x234
    ctx->pc = 0x1448fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 564));
    // 0x144900: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x144900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x144904: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x144904u;
    SET_GPR_U32(ctx, 31, 0x14490Cu);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x144904u, 0x14490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14490Cu;
label_14490c:
    // 0x14490c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x144910: 0x2444023c  addiu       $a0, $v0, 0x23C
    ctx->pc = 0x144910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 572));
    // 0x144914: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x144914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x144918: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x144918u;
    SET_GPR_U32(ctx, 31, 0x144920u);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x144918u, 0x144920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144920u;
label_144920:
    // 0x144920: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x144920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x144924: 0x24440254  addiu       $a0, $v0, 0x254
    ctx->pc = 0x144924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 596));
    // 0x144928: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x144928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14492c: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x14492Cu;
    SET_GPR_U32(ctx, 31, 0x144934u);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x14492Cu, 0x144934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144934u;
label_144934:
    // 0x144934: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x144934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x144938: 0x8c520254  lw          $s2, 0x254($v0)
    ctx->pc = 0x144938u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
    // 0x14493c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x144940: 0x8c530258  lw          $s3, 0x258($v0)
    ctx->pc = 0x144940u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x144944: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x144944u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x144948: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x144948u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x14494c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14494cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x144950: 0x3c0230ff  lui         $v0, 0x30FF
    ctx->pc = 0x144950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12543 << 16));
    // 0x144954: 0x34474040  ori         $a3, $v0, 0x4040
    ctx->pc = 0x144954u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x144958: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x144958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x14495c: 0x34482020  ori         $t0, $v0, 0x2020
    ctx->pc = 0x14495cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x144960: 0x3c0230ff  lui         $v0, 0x30FF
    ctx->pc = 0x144960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12543 << 16));
    // 0x144964: 0x34494040  ori         $t1, $v0, 0x4040
    ctx->pc = 0x144964u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x144968: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x144968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x14496c: 0x344a2020  ori         $t2, $v0, 0x2020
    ctx->pc = 0x14496cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x144970: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x144970u;
    SET_GPR_U32(ctx, 31, 0x144978u);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x144970u, 0x144978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144978u;
label_144978:
    // 0x144978: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x144978u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14497c: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x14497cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x144980: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x144980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x144984: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x144984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x144988: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x144988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x14498c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14498cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x144990: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x144990u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x144994: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x144994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x144998: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x144998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14499c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x14499cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1449a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1449a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1449a4: 0xfe220020  sd          $v0, 0x20($s1)
    ctx->pc = 0x1449a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 2));
    // 0x1449a8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1449a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1449ac: 0x34423001  ori         $v0, $v0, 0x3001
    ctx->pc = 0x1449acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12289);
    // 0x1449b0: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x1449b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x1449b4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1449b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1449b8: 0x34423001  ori         $v0, $v0, 0x3001
    ctx->pc = 0x1449b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12289);
    // 0x1449bc: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x1449bcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x1449c0: 0x3c026126  lui         $v0, 0x6126
    ctx->pc = 0x1449c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24870 << 16));
    // 0x1449c4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1449c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1449c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1449c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1449cc: 0x34028009  ori         $v0, $zero, 0x8009
    ctx->pc = 0x1449ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x1449d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1449d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1449d4: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x1449d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x1449d8: 0x3c026126  lui         $v0, 0x6126
    ctx->pc = 0x1449d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24870 << 16));
    // 0x1449dc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1449dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1449e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1449e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1449e4: 0x34028009  ori         $v0, $zero, 0x8009
    ctx->pc = 0x1449e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x1449e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1449e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1449ec: 0xfe220070  sd          $v0, 0x70($s1)
    ctx->pc = 0x1449ecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
    // 0x1449f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1449f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1449f4: 0x2444024c  addiu       $a0, $v0, 0x24C
    ctx->pc = 0x1449f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 588));
    // 0x1449f8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1449f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1449fc: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x1449FCu;
    SET_GPR_U32(ctx, 31, 0x144A04u);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x1449FCu, 0x144A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A04u;
label_144a04:
    // 0x144a04: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x144a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x144a08: 0x8c52024c  lw          $s2, 0x24C($v0)
    ctx->pc = 0x144a08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x144a0c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x144a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x144a10: 0x8c530250  lw          $s3, 0x250($v0)
    ctx->pc = 0x144a10u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x144a14: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x144a14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x144a18: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x144a18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x144a1c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x144a1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x144a20: 0x3c0230ff  lui         $v0, 0x30FF
    ctx->pc = 0x144a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12543 << 16));
    // 0x144a24: 0x34474040  ori         $a3, $v0, 0x4040
    ctx->pc = 0x144a24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x144a28: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x144a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x144a2c: 0x34482020  ori         $t0, $v0, 0x2020
    ctx->pc = 0x144a2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x144a30: 0x3c0230ff  lui         $v0, 0x30FF
    ctx->pc = 0x144a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12543 << 16));
    // 0x144a34: 0x34494040  ori         $t1, $v0, 0x4040
    ctx->pc = 0x144a34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x144a38: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x144a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x144a3c: 0x344a2020  ori         $t2, $v0, 0x2020
    ctx->pc = 0x144a3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x144a40: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x144A40u;
    SET_GPR_U32(ctx, 31, 0x144A48u);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x144A40u, 0x144A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A48u;
label_144a48:
    // 0x144a48: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x144a48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x144a4c: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x144a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x144a50: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x144a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x144a54: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x144a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x144a58: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x144a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x144a5c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x144a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x144a60: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x144a60u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x144a64: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x144a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x144a68: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x144a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x144a6c: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x144a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x144a70: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x144a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x144a74: 0xfe230020  sd          $v1, 0x20($s1)
    ctx->pc = 0x144a74u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 3));
    // 0x144a78: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x144a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x144a7c: 0x34633001  ori         $v1, $v1, 0x3001
    ctx->pc = 0x144a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12289);
    // 0x144a80: 0xfe030030  sd          $v1, 0x30($s0)
    ctx->pc = 0x144a80u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
    // 0x144a84: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x144a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x144a88: 0x34633001  ori         $v1, $v1, 0x3001
    ctx->pc = 0x144a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12289);
    // 0x144a8c: 0xfe230030  sd          $v1, 0x30($s1)
    ctx->pc = 0x144a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 3));
    // 0x144a90: 0x3c036126  lui         $v1, 0x6126
    ctx->pc = 0x144a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24870 << 16));
    // 0x144a94: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x144a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x144a98: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x144a98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x144a9c: 0x34038009  ori         $v1, $zero, 0x8009
    ctx->pc = 0x144a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x144aa0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x144aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x144aa4: 0xfe030070  sd          $v1, 0x70($s0)
    ctx->pc = 0x144aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 3));
    // 0x144aa8: 0x3c036126  lui         $v1, 0x6126
    ctx->pc = 0x144aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24870 << 16));
    // 0x144aac: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x144aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x144ab0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x144ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x144ab4: 0x34038009  ori         $v1, $zero, 0x8009
    ctx->pc = 0x144ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x144ab8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x144ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x144abc: 0xfe230070  sd          $v1, 0x70($s1)
    ctx->pc = 0x144abcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 3));
    // 0x144ac0: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x144ac0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144ac4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x144ac4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144ac8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x144ac8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144acc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144ad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144ad8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x144ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x144adc: 0x3e00008  jr          $ra
    ctx->pc = 0x144ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144AE4u;
}
