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

// Function: entry_0025ce58
// Address: 0x25ce58 - 0x25cf00
void entry_0025ce58_0x25ce58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ce58_0x25ce58");
#endif

    ctx->pc = 0x25ce58u;

    // 0x25ce58: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x25ce58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x25ce5c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x25ce5cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x25ce60: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25ce64: 0x8c630350  lw          $v1, 0x350($v1)
    ctx->pc = 0x25ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 848)));
    // 0x25ce68: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x25ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x25ce6c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25ce6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25ce70: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x25ce70u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25ce74: 0x32d7003f  andi        $s7, $s6, 0x3F
    ctx->pc = 0x25ce74u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)63);
    // 0x25ce78: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x25ce78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x25ce7c: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x25ce7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25ce80: 0x8fb40168  lw          $s4, 0x168($sp)
    ctx->pc = 0x25ce80u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25ce84: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x25ce84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25ce88: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x25ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x25ce8c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25ce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25ce90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25ce94: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25ce94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25ce98: 0x8e8302d0  lw          $v1, 0x2D0($s4)
    ctx->pc = 0x25ce98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
    // 0x25ce9c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x25ce9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25cea0: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x25cea0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25cea4: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25cea8: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25cea8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x25ceac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25ceacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25ceb0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25ceb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25ceb4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x25CEB4u;
    {
        const bool branch_taken_0x25ceb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ceb4) {
            ctx->pc = 0x25CF00u;
            return;
        }
    }
    ctx->pc = 0x25CEBCu;
    // 0x25cebc: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25cec0: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x25cec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
    // 0x25cec4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x25CEC4u;
    {
        const bool branch_taken_0x25cec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cec4) {
            ctx->pc = 0x25CF00u;
            return;
        }
    }
    ctx->pc = 0x25CECCu;
    // 0x25cecc: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25ceccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25ced0: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x25ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
    // 0x25ced4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x25ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x25ced8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25ced8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25cedc: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x25cedcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25cee0: 0x8fb40168  lw          $s4, 0x168($sp)
    ctx->pc = 0x25cee0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25cee4: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x25cee4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25cee8: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x25cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x25ceec: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25ceecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25cef0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25cef4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25cef4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25cef8: 0x8e8302d0  lw          $v1, 0x2D0($s4)
    ctx->pc = 0x25cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
    // 0x25cefc: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x25cefcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x25cf00u;
}
