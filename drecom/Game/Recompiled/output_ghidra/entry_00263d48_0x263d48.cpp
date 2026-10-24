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

// Function: entry_00263d48
// Address: 0x263d48 - 0x263df0
void entry_00263d48_0x263d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263d48_0x263d48");
#endif

    ctx->pc = 0x263d48u;

    // 0x263d48: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263d4c: 0x8c630a10  lw          $v1, 0xA10($v1)
    ctx->pc = 0x263d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2576)));
    // 0x263d50: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x263d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x263d54: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x263d54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263d58: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x263d58u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263d5c: 0x3283003f  andi        $v1, $s4, 0x3F
    ctx->pc = 0x263d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)63);
    // 0x263d60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x263d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263d64: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x263d64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263d68: 0xafb100dc  sw          $s1, 0xDC($sp)
    ctx->pc = 0x263d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 17));
    // 0x263d6c: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x263d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263d70: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x263d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x263d74: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x263d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x263d78: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x263d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x263d7c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x263d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x263d80: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x263d80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x263d84: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x263d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x263d88: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x263d88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x263d8c: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x263d8cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x263d90: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263d94: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x263d94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x263d98: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x263d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x263d9c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x263d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x263da0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x263DA0u;
    {
        const bool branch_taken_0x263da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x263da0) {
            ctx->pc = 0x263DF0u;
            return;
        }
    }
    ctx->pc = 0x263DA8u;
    // 0x263da8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263dac: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x263dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
    // 0x263db0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x263DB0u;
    {
        const bool branch_taken_0x263db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x263db0) {
            ctx->pc = 0x263DF0u;
            return;
        }
    }
    ctx->pc = 0x263DB8u;
    // 0x263db8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263dbc: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x263dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
    // 0x263dc0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x263dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x263dc4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x263dc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263dc8: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x263dc8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263dcc: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x263dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263dd0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x263dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x263dd4: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x263dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x263dd8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x263dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x263ddc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x263ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x263de0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x263de0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x263de4: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x263de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x263de8: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x263de8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x263dec: 0x0  nop
    ctx->pc = 0x263decu;
    // NOP
    ctx->pc = 0x263df0u;
}
