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

// Function: entry_0031c46c
// Address: 0x31c46c - 0x31c5d4
void entry_0031c46c_0x31c46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031c46c_0x31c46c");
#endif

    switch (ctx->pc) {
        case 0x31c4a0u: goto label_31c4a0;
        case 0x31c4acu: goto label_31c4ac;
        case 0x31c4e0u: goto label_31c4e0;
        case 0x31c4ecu: goto label_31c4ec;
        case 0x31c524u: goto label_31c524;
        case 0x31c530u: goto label_31c530;
        case 0x31c578u: goto label_31c578;
        case 0x31c584u: goto label_31c584;
        case 0x31c5bcu: goto label_31c5bc;
        case 0x31c5c8u: goto label_31c5c8;
        default: break;
    }

    ctx->pc = 0x31c46cu;

    // 0x31c46c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c470: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x31c470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31c474: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x31c474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x31c478: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31c478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x31c47c: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x31c47cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31c480: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x31c480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x31c484: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31c484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31c488: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x31c488u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x31c48c: 0x24042d02  addiu       $a0, $zero, 0x2D02
    ctx->pc = 0x31c48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11522));
    // 0x31c490: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c490u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31c494: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c498: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31C498u;
    SET_GPR_U32(ctx, 31, 0x31C4A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C498u, 0x31C4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C4A0u;
label_31c4a0:
    // 0x31c4a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c4a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c4a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31C4A4u;
    SET_GPR_U32(ctx, 31, 0x31C4ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C4A4u, 0x31C4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C4ACu;
label_31c4ac:
    // 0x31c4ac: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c4b0: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x31c4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31c4b4: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x31c4b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x31c4b8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31c4b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x31c4bc: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x31c4bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31c4c0: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x31c4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x31c4c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31c4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31c4c8: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x31c4c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x31c4cc: 0x2404490a  addiu       $a0, $zero, 0x490A
    ctx->pc = 0x31c4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18698));
    // 0x31c4d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c4d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31c4d4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c4d8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31C4D8u;
    SET_GPR_U32(ctx, 31, 0x31C4E0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C4D8u, 0x31C4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C4E0u;
label_31c4e0:
    // 0x31c4e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c4e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c4e4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31C4E4u;
    SET_GPR_U32(ctx, 31, 0x31C4ECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C4E4u, 0x31C4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C4ECu;
label_31c4ec:
    // 0x31c4ec: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x31c4ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c4f0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c4f4: 0x8c670130  lw          $a3, 0x130($v1)
    ctx->pc = 0x31c4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x31c4f8: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x31c4f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x31c4fc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31c4fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x31c500: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x31c500u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31c504: 0x62c38  dsll        $a1, $a2, 16
    ctx->pc = 0x31c504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << 16);
    // 0x31c508: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x31c508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x31c50c: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x31c50cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31c510: 0x2404490b  addiu       $a0, $zero, 0x490B
    ctx->pc = 0x31c510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18699));
    // 0x31c514: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c514u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31c518: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c51c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31C51Cu;
    SET_GPR_U32(ctx, 31, 0x31C524u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C51Cu, 0x31C524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C524u;
label_31c524:
    // 0x31c524: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c524u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c528: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31C528u;
    SET_GPR_U32(ctx, 31, 0x31C530u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C528u, 0x31C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C530u;
label_31c530:
    // 0x31c530: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x31c530u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c534: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c538: 0xac7012a4  sw          $s0, 0x12A4($v1)
    ctx->pc = 0x31c538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4772), GPR_U32(ctx, 16));
    // 0x31c53c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c540: 0xac9112a8  sw          $s1, 0x12A8($a0)
    ctx->pc = 0x31c540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4776), GPR_U32(ctx, 17));
    // 0x31c544: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c548: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x31c548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x31c54c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x31c54cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31c550: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31c550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x31c554: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31c554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31c558: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31c558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x31c55c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31c55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31c560: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x31c560u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31c564: 0x2404490e  addiu       $a0, $zero, 0x490E
    ctx->pc = 0x31c564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18702));
    // 0x31c568: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c568u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31c56c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c570: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31C570u;
    SET_GPR_U32(ctx, 31, 0x31C578u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C570u, 0x31C578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C578u;
label_31c578:
    // 0x31c578: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c578u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c57c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31C57Cu;
    SET_GPR_U32(ctx, 31, 0x31C584u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C57Cu, 0x31C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C584u;
label_31c584:
    // 0x31c584: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x31c584u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c588: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c58c: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x31c58cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x31c590: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x31c590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x31c594: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31c594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31c598: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31c598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31c59c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31c59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x31c5a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31c5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31c5a4: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x31c5a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31c5a8: 0x2404490f  addiu       $a0, $zero, 0x490F
    ctx->pc = 0x31c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18703));
    // 0x31c5ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c5acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31c5b0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c5b4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31C5B4u;
    SET_GPR_U32(ctx, 31, 0x31C5BCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C5B4u, 0x31C5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C5BCu;
label_31c5bc:
    // 0x31c5bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c5bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c5c0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31C5C0u;
    SET_GPR_U32(ctx, 31, 0x31C5C8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C5C0u, 0x31C5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C5C8u;
label_31c5c8:
    // 0x31c5c8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x31c5c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c5cc: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x31C5CCu;
    {
        const bool branch_taken_0x31c5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c5cc) {
            ctx->pc = 0x31C6B4u;
            return;
        }
    }
    ctx->pc = 0x31C5D4u;
}
