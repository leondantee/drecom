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

// Function: ectrl06_move00_t02
// Address: 0x24f910 - 0x24fc3c
void ectrl06_move00_t02_0x24f910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl06_move00_t02_0x24f910");
#endif

    switch (ctx->pc) {
        case 0x24fa6cu: goto label_24fa6c;
        case 0x24fa90u: goto label_24fa90;
        case 0x24fb74u: goto label_24fb74;
        case 0x24fb98u: goto label_24fb98;
        case 0x24fbd4u: goto label_24fbd4;
        case 0x24fbe0u: goto label_24fbe0;
        case 0x24fc1cu: goto label_24fc1c;
        case 0x24fc28u: goto label_24fc28;
        default: break;
    }

    ctx->pc = 0x24f910u;

    // 0x24f910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24f910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24f914: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x24f914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x24f918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24f918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24f91c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x24f91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x24f920: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24f920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f924: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x24f924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x24f928: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x24f928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24f92c: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x24F92Cu;
    {
        const bool branch_taken_0x24f92c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24f92c) {
            ctx->pc = 0x24F988u;
            goto label_24f988;
        }
    }
    ctx->pc = 0x24F934u;
    // 0x24f934: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x24f934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24f938: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x24F938u;
    {
        const bool branch_taken_0x24f938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24f938) {
            ctx->pc = 0x24F988u;
            goto label_24f988;
        }
    }
    ctx->pc = 0x24F940u;
    // 0x24f940: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x24f940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24f944: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x24F944u;
    {
        const bool branch_taken_0x24f944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24f944) {
            ctx->pc = 0x24F988u;
            goto label_24f988;
        }
    }
    ctx->pc = 0x24F94Cu;
    // 0x24f94c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24f94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24f950: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24F950u;
    {
        const bool branch_taken_0x24f950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24f950) {
            ctx->pc = 0x24F988u;
            goto label_24f988;
        }
    }
    ctx->pc = 0x24F958u;
    // 0x24f958: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x24F958u;
    {
        const bool branch_taken_0x24f958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f958) {
            ctx->pc = 0x24F988u;
            goto label_24f988;
        }
    }
    ctx->pc = 0x24F960u;
    // 0x24f960: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x24f960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24f964: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F964u;
    {
        const bool branch_taken_0x24f964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24f964) {
            ctx->pc = 0x24F974u;
            goto label_24f974;
        }
    }
    ctx->pc = 0x24F96Cu;
    // 0x24f96c: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x24F96Cu;
    {
        const bool branch_taken_0x24f96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f96c) {
            ctx->pc = 0x24FC28u;
            goto label_24fc28;
        }
    }
    ctx->pc = 0x24F974u;
label_24f974:
    // 0x24f974: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f978: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f97c: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x24f97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x24f980: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f984: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24f984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_24f988:
    // 0x24f988: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f98c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24f990: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f994: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f998: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f99c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f9a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f9a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f9a8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24f9a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f9ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f9b0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24f9b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f9b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f9bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f9c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f9c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f9c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f9cc: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24f9ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24f9d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f9d4: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24f9d8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f9dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f9e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f9e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f9e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f9ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f9f0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24f9f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f9f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f9f8: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24f9fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fa00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fa00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fa04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fa04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fa08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fa0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fa10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24fa10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fa14: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x24fa14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24fa18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fa1c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24fa20: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fa20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fa24: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fa24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fa28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fa28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fa2c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fa2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fa30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fa34: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24fa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fa38: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24fa38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fa3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fa40: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24fa44: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fa44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fa48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fa48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fa4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fa4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fa50: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fa50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fa54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fa58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24fa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fa5c: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24fa5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24fa60: 0x24041f00  addiu       $a0, $zero, 0x1F00
    ctx->pc = 0x24fa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7936));
    // 0x24fa64: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24FA64u;
    SET_GPR_U32(ctx, 31, 0x24FA6Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24FA64u, 0x24FA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FA6Cu;
label_24fa6c:
    // 0x24fa6c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x24fa6cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24fa70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fa74: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x24fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x24fa78: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24fa78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fa7c: 0x26020310  addiu       $v0, $s0, 0x310
    ctx->pc = 0x24fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x24fa80: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24fa80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24fa84: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24fa84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24fa88: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24FA88u;
    SET_GPR_U32(ctx, 31, 0x24FA90u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24FA88u, 0x24FA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FA90u;
label_24fa90:
    // 0x24fa90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fa94: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24fa98: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fa98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fa9c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fa9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24faa0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24faa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24faa4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24faa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24faa8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24faa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24faac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24faacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fab0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24fab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fab4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fab8: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24fabc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fac0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fac4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fac8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24facc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24faccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fad0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24fad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fad4: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24fad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24fad8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fadc: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24fae0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fae4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fae8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24faec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24faecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24faf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24faf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24faf4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24faf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24faf8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24faf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fafc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fb00: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24fb04: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fb08: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fb0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fb10: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fb14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fb18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24fb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fb1c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x24fb1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24fb20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fb24: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24fb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24fb28: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fb2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fb30: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fb34: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fb38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fb3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24fb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fb40: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24fb40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fb44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fb48: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24fb4c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fb50: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fb54: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fb58: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fb5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fb60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24fb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fb64: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24fb64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24fb68: 0x24041f01  addiu       $a0, $zero, 0x1F01
    ctx->pc = 0x24fb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7937));
    // 0x24fb6c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24FB6Cu;
    SET_GPR_U32(ctx, 31, 0x24FB74u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24FB6Cu, 0x24FB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FB74u;
label_24fb74:
    // 0x24fb74: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x24fb74u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24fb78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fb7c: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x24fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x24fb80: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24fb80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fb84: 0x26020310  addiu       $v0, $s0, 0x310
    ctx->pc = 0x24fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x24fb88: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24fb88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24fb8c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24fb8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24fb90: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24FB90u;
    SET_GPR_U32(ctx, 31, 0x24FB98u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24FB90u, 0x24FB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FB98u;
label_24fb98:
    // 0x24fb98: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x24fb98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fb9c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x24fb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fba0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fba4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24fba8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fbac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fbb0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fbb4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fbb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fbbc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24fbbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fbc0: 0x24042806  addiu       $a0, $zero, 0x2806
    ctx->pc = 0x24fbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10246));
    // 0x24fbc4: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24fbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24fbc8: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24fbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24fbcc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24FBCCu;
    SET_GPR_U32(ctx, 31, 0x24FBD4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24FBCCu, 0x24FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FBD4u;
label_24fbd4:
    // 0x24fbd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24fbd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24fbd8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24FBD8u;
    SET_GPR_U32(ctx, 31, 0x24FBE0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24FBD8u, 0x24FBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FBE0u;
label_24fbe0:
    // 0x24fbe0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x24fbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fbe4: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x24fbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fbe8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fbec: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24fbf0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fbf4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fbf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fbf8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fbfc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fc00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fc04: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24fc04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fc08: 0x24042807  addiu       $a0, $zero, 0x2807
    ctx->pc = 0x24fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10247));
    // 0x24fc0c: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24fc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24fc10: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24fc10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24fc14: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24FC14u;
    SET_GPR_U32(ctx, 31, 0x24FC1Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24FC14u, 0x24FC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FC1Cu;
label_24fc1c:
    // 0x24fc1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24fc1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24fc20: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24FC20u;
    SET_GPR_U32(ctx, 31, 0x24FC28u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24FC20u, 0x24FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FC28u;
label_24fc28:
    // 0x24fc28: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x24fc28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24fc2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24fc2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fc30: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24fc34: 0x3e00008  jr          $ra
    ctx->pc = 0x24FC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FC3Cu;
}
