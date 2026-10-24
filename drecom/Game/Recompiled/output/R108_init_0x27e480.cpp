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

// Function: R108_init
// Address: 0x27e480 - 0x27e728
void R108_init_0x27e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R108_init_0x27e480");
#endif

    switch (ctx->pc) {
        case 0x27e4a4u: goto label_27e4a4;
        case 0x27e4acu: goto label_27e4ac;
        case 0x27e4ccu: goto label_27e4cc;
        case 0x27e4d8u: goto label_27e4d8;
        case 0x27e500u: goto label_27e500;
        case 0x27e568u: goto label_27e568;
        case 0x27e594u: goto label_27e594;
        case 0x27e5b8u: goto label_27e5b8;
        default: break;
    }

    ctx->pc = 0x27e480u;

    // 0x27e480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27e480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27e484: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x27e484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x27e488: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27e488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27e48c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27e48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27e490: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27e490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27e494: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27e494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27e498: 0x24441090  addiu       $a0, $v0, 0x1090
    ctx->pc = 0x27e498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4240));
    // 0x27e49c: 0xc0a103c  jal         func_2840F0
    ctx->pc = 0x27E49Cu;
    SET_GPR_U32(ctx, 31, 0x27E4A4u);
    ctx->pc = 0x2840F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840F0u, 0x27E49Cu, 0x27E4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E4A4u;
label_27e4a4:
    // 0x27e4a4: 0xc09f9e4  jal         func_27E790
    ctx->pc = 0x27E4A4u;
    SET_GPR_U32(ctx, 31, 0x27E4ACu);
    ctx->pc = 0x27E790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E790u, 0x27E4A4u, 0x27E4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E4ACu;
label_27e4ac:
    // 0x27e4ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e4b0: 0xac20d73c  sw          $zero, -0x28C4($at)
    ctx->pc = 0x27e4b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD73Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD73Cu, _value); } while (0);
    // 0x27e4b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e4b8: 0xac20d7dc  sw          $zero, -0x2824($at)
    ctx->pc = 0x27e4b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD7DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD7DCu, _value); } while (0);
    // 0x27e4bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27e4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e4c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27e4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e4c4: 0xc0ce14c  jal         func_338530
    ctx->pc = 0x27E4C4u;
    SET_GPR_U32(ctx, 31, 0x27E4CCu);
    ctx->pc = 0x338530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338530u, 0x27E4C4u, 0x27E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E4CCu;
label_27e4cc:
    // 0x27e4cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27e4d0: 0x14430027  bne         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x27E4D0u;
    {
        const bool branch_taken_0x27e4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27e4d0) {
            ctx->pc = 0x27E570u;
            goto label_27e570;
        }
    }
    ctx->pc = 0x27E4D8u;
label_27e4d8:
    // 0x27e4d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e4dc: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x27e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27e4e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27e4e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27e4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27e4e8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27E4E8u;
    {
        const bool branch_taken_0x27e4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e4e8) {
            ctx->pc = 0x27E544u;
            goto label_27e544;
        }
    }
    ctx->pc = 0x27E4F0u;
    // 0x27e4f0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27e4f4: 0x244413e0  addiu       $a0, $v0, 0x13E0
    ctx->pc = 0x27e4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5088));
    // 0x27e4f8: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x27E4F8u;
    SET_GPR_U32(ctx, 31, 0x27E500u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x27E4F8u, 0x27E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E500u;
label_27e500:
    // 0x27e500: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x27e500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x27e504: 0x2450bb48  addiu       $s0, $v0, -0x44B8
    ctx->pc = 0x27e504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
    // 0x27e508: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x27e508u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x47BB48u));
    // 0x27e50c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x27e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x27e510: 0xa622127e  sh          $v0, 0x127E($s1)
    ctx->pc = 0x27e510u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e514: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x27e514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x27e518: 0x2450bb4c  addiu       $s0, $v0, -0x44B4
    ctx->pc = 0x27e518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949708));
    // 0x27e51c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x27e51cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x27e520: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x27e520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x27e524: 0xa622127e  sh          $v0, 0x127E($s1)
    ctx->pc = 0x27e524u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e528: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x27e528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x27e52c: 0x2450bb50  addiu       $s0, $v0, -0x44B0
    ctx->pc = 0x27e52cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949712));
    // 0x27e530: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x27e530u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x47BB50u));
    // 0x27e534: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x27e534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x27e538: 0xa622127e  sh          $v0, 0x127E($s1)
    ctx->pc = 0x27e538u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e53c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27E53Cu;
    {
        const bool branch_taken_0x27e53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e53c) {
            ctx->pc = 0x27E5A8u;
            goto label_27e5a8;
        }
    }
    ctx->pc = 0x27E544u;
label_27e544:
    // 0x27e544: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e548: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x27e548u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x27e54c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27e54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27e550: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x27e550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x27e554: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27e554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27e558: 0x244213d0  addiu       $v0, $v0, 0x13D0
    ctx->pc = 0x27e558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5072));
    // 0x27e55c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x27e55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e560: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x27E560u;
    SET_GPR_U32(ctx, 31, 0x27E568u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x27E560u, 0x27E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E568u;
label_27e568:
    // 0x27e568: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27E568u;
    {
        const bool branch_taken_0x27e568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e568) {
            ctx->pc = 0x27E5A8u;
            goto label_27e5a8;
        }
    }
    ctx->pc = 0x27E570u;
label_27e570:
    // 0x27e570: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e574: 0x8c221aa4  lw          $v0, 0x1AA4($at)
    ctx->pc = 0x27e574u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27e578: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x27e578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x27e57c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x27E57Cu;
    {
        const bool branch_taken_0x27e57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e57c) {
            ctx->pc = 0x27E4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e4d8;
        }
    }
    ctx->pc = 0x27E584u;
    // 0x27e584: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27e584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27e588: 0x244413e8  addiu       $a0, $v0, 0x13E8
    ctx->pc = 0x27e588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5096));
    // 0x27e58c: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x27E58Cu;
    SET_GPR_U32(ctx, 31, 0x27E594u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x27E58Cu, 0x27E594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E594u;
label_27e594:
    // 0x27e594: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e598: 0x8c221aa4  lw          $v0, 0x1AA4($at)
    ctx->pc = 0x27e598u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27e59c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x27e59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x27e5a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e5a4: 0xac221aa4  sw          $v0, 0x1AA4($at)
    ctx->pc = 0x27e5a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1AA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1AA4u, _value); } while (0);
label_27e5a8:
    // 0x27e5a8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27e5ac: 0x244413f0  addiu       $a0, $v0, 0x13F0
    ctx->pc = 0x27e5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5104));
    // 0x27e5b0: 0xc0a1048  jal         func_284120
    ctx->pc = 0x27E5B0u;
    SET_GPR_U32(ctx, 31, 0x27E5B8u);
    ctx->pc = 0x284120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284120u, 0x27E5B0u, 0x27E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E5B8u;
label_27e5b8:
    // 0x27e5b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e5bc: 0x8c241aa4  lw          $a0, 0x1AA4($at)
    ctx->pc = 0x27e5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27e5c0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x27e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x27e5c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27e5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27e5c8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x27E5C8u;
    {
        const bool branch_taken_0x27e5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e5c8) {
            ctx->pc = 0x27E618u;
            goto label_27e618;
        }
    }
    ctx->pc = 0x27E5D0u;
    // 0x27e5d0: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27e5d4: 0x2463ed50  addiu       $v1, $v1, -0x12B0
    ctx->pc = 0x27e5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962512));
    // 0x27e5d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e5dc: 0xac23dafc  sw          $v1, -0x2504($at)
    ctx->pc = 0x27e5dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CDAFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDAFCu, _value); } while (0);
    // 0x27e5e0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x27e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27e5e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e5e8: 0xac23daf8  sw          $v1, -0x2508($at)
    ctx->pc = 0x27e5e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CDAF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDAF8u, _value); } while (0);
    // 0x27e5ec: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27e5f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e5f4: 0xa023daf1  sb          $v1, -0x250F($at)
    ctx->pc = 0x27e5f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CDAF1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDAF1u, _value); } while (0);
    // 0x27e5f8: 0x24030091  addiu       $v1, $zero, 0x91
    ctx->pc = 0x27e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x27e5fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e600: 0xa023daf3  sb          $v1, -0x250D($at)
    ctx->pc = 0x27e600u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CDAF3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDAF3u, _value); } while (0);
    // 0x27e604: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27e604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e608: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e60c: 0xa023d551  sb          $v1, -0x2AAF($at)
    ctx->pc = 0x27e60cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD551u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD551u, _value); } while (0);
    // 0x27e610: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27E610u;
    {
        const bool branch_taken_0x27e610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e610) {
            ctx->pc = 0x27E624u;
            goto label_27e624;
        }
    }
    ctx->pc = 0x27E618u;
label_27e618:
    // 0x27e618: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27e618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e61c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e620: 0xa023daf1  sb          $v1, -0x250F($at)
    ctx->pc = 0x27e620u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CDAF1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDAF1u, _value); } while (0);
label_27e624:
    // 0x27e624: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e628: 0x8c241aa4  lw          $a0, 0x1AA4($at)
    ctx->pc = 0x27e628u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27e62c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x27e62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x27e630: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27e630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27e634: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x27E634u;
    {
        const bool branch_taken_0x27e634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e634) {
            ctx->pc = 0x27E684u;
            goto label_27e684;
        }
    }
    ctx->pc = 0x27E63Cu;
    // 0x27e63c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27e640: 0x2463eda0  addiu       $v1, $v1, -0x1260
    ctx->pc = 0x27e640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962592));
    // 0x27e644: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e648: 0xac23d91c  sw          $v1, -0x26E4($at)
    ctx->pc = 0x27e648u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD91Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD91Cu, _value); } while (0);
    // 0x27e64c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x27e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27e650: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e654: 0xac23d918  sw          $v1, -0x26E8($at)
    ctx->pc = 0x27e654u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD918u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD918u, _value); } while (0);
    // 0x27e658: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27e658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27e65c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e660: 0xa023d911  sb          $v1, -0x26EF($at)
    ctx->pc = 0x27e660u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD911u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD911u, _value); } while (0);
    // 0x27e664: 0x24030091  addiu       $v1, $zero, 0x91
    ctx->pc = 0x27e664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x27e668: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e66c: 0xa023d913  sb          $v1, -0x26ED($at)
    ctx->pc = 0x27e66cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD913u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD913u, _value); } while (0);
    // 0x27e670: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27e670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e674: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e678: 0xa023d691  sb          $v1, -0x296F($at)
    ctx->pc = 0x27e678u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD691u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD691u, _value); } while (0);
    // 0x27e67c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27E67Cu;
    {
        const bool branch_taken_0x27e67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e67c) {
            ctx->pc = 0x27E690u;
            goto label_27e690;
        }
    }
    ctx->pc = 0x27E684u;
label_27e684:
    // 0x27e684: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27e684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e688: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e68c: 0xa023d911  sb          $v1, -0x26EF($at)
    ctx->pc = 0x27e68cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD911u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD911u, _value); } while (0);
label_27e690:
    // 0x27e690: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e694: 0x8c241aa4  lw          $a0, 0x1AA4($at)
    ctx->pc = 0x27e694u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27e698: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27e698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x27e69c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27e69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27e6a0: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x27E6A0u;
    {
        const bool branch_taken_0x27e6a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e6a0) {
            ctx->pc = 0x27E700u;
            goto label_27e700;
        }
    }
    ctx->pc = 0x27E6A8u;
    // 0x27e6a8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27e6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27e6ac: 0x2463efd0  addiu       $v1, $v1, -0x1030
    ctx->pc = 0x27e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963152));
    // 0x27e6b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e6b4: 0xac23d9bc  sw          $v1, -0x2644($at)
    ctx->pc = 0x27e6b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD9BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD9BCu, _value); } while (0);
    // 0x27e6b8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x27e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27e6bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e6c0: 0xac23d9b8  sw          $v1, -0x2648($at)
    ctx->pc = 0x27e6c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD9B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD9B8u, _value); } while (0);
    // 0x27e6c4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27e6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27e6c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e6cc: 0xa023d9b1  sb          $v1, -0x264F($at)
    ctx->pc = 0x27e6ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD9B1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD9B1u, _value); } while (0);
    // 0x27e6d0: 0x24030091  addiu       $v1, $zero, 0x91
    ctx->pc = 0x27e6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x27e6d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e6d8: 0xa023d9b3  sb          $v1, -0x264D($at)
    ctx->pc = 0x27e6d8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD9B3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD9B3u, _value); } while (0);
    // 0x27e6dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e6e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e6e4: 0xa023d5f1  sb          $v1, -0x2A0F($at)
    ctx->pc = 0x27e6e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD5F1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD5F1u, _value); } while (0);
    // 0x27e6e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27e6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27e6ec: 0x8c32f9e4  lw          $s2, -0x61C($at)
    ctx->pc = 0x27e6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x27e6f0: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x27e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x27e6f4: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x27e6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x27e6f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27E6F8u;
    {
        const bool branch_taken_0x27e6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e6f8) {
            ctx->pc = 0x27E70Cu;
            goto label_27e70c;
        }
    }
    ctx->pc = 0x27E700u;
label_27e700:
    // 0x27e700: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27e700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e704: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e708: 0xa023d9b1  sb          $v1, -0x264F($at)
    ctx->pc = 0x27e708u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD9B1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD9B1u, _value); } while (0);
label_27e70c:
    // 0x27e70c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x27e70cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e710: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27e710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e714: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27e714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27e718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e71c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27e71cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27e720: 0x3e00008  jr          $ra
    ctx->pc = 0x27E720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E728u;
}
