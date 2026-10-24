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

// Function: entry_00258da4
// Address: 0x258da4 - 0x258df4
void entry_00258da4_0x258da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258da4_0x258da4");
#endif

    ctx->pc = 0x258da4u;

    // 0x258da4: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x258da4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x258da8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x258da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x258dac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x258dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x258db0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x258db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x258db4: 0x8c700010  lw          $s0, 0x10($v1)
    ctx->pc = 0x258db4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x258db8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x258db8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x258dbc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x258dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x258dc0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x258dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x258dc4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x258DC4u;
    {
        const bool branch_taken_0x258dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x258dc4) {
            ctx->pc = 0x258DF4u;
            return;
        }
    }
    ctx->pc = 0x258DCCu;
    // 0x258dcc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x258dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x258dd0: 0xa6030020  sh          $v1, 0x20($s0)
    ctx->pc = 0x258dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x258dd4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x258dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x258dd8: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x258dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x258ddc: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x258ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x258de0: 0x3c036c08  lui         $v1, 0x6C08
    ctx->pc = 0x258de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27656 << 16));
    // 0x258de4: 0x346300b8  ori         $v1, $v1, 0xB8
    ctx->pc = 0x258de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)184);
    // 0x258de8: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x258de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x258dec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x258DECu;
    {
        const bool branch_taken_0x258dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258dec) {
            ctx->pc = 0x258E00u;
            return;
        }
    }
    ctx->pc = 0x258DF4u;
}
