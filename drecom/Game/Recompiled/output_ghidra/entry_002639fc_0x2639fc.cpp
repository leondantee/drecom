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

// Function: entry_002639fc
// Address: 0x2639fc - 0x263a70
void entry_002639fc_0x2639fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002639fc_0x2639fc");
#endif

    ctx->pc = 0x2639fcu;

    // 0x2639fc: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x2639fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x263a00: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x263a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x263a04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x263a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263a08: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x263a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x263a0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x263a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263a10: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x263a10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263a14: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x263a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x263a18: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x263a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x263a1c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x263a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x263a20: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x263a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263a24: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x263a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x263a28: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x263a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x263a2c: 0xa7a000b8  sh          $zero, 0xB8($sp)
    ctx->pc = 0x263a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 184), (uint16_t)GPR_U32(ctx, 0));
    // 0x263a30: 0xa7a000ba  sh          $zero, 0xBA($sp)
    ctx->pc = 0x263a30u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 186), (uint16_t)GPR_U32(ctx, 0));
    // 0x263a34: 0xa7a000bc  sh          $zero, 0xBC($sp)
    ctx->pc = 0x263a34u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 188), (uint16_t)GPR_U32(ctx, 0));
    // 0x263a38: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x263a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x263a3c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x263a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x263a40: 0x10830038  beq         $a0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x263A40u;
    {
        const bool branch_taken_0x263a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x263a40) {
            ctx->pc = 0x263B24u;
            return;
        }
    }
    ctx->pc = 0x263A48u;
    // 0x263a48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x263a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x263a4c: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x263A4Cu;
    {
        const bool branch_taken_0x263a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x263a4c) {
            ctx->pc = 0x263B00u;
            return;
        }
    }
    ctx->pc = 0x263A54u;
    // 0x263a54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x263a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263a58: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x263A58u;
    {
        const bool branch_taken_0x263a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x263a58) {
            ctx->pc = 0x263AB8u;
            return;
        }
    }
    ctx->pc = 0x263A60u;
    // 0x263a60: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x263A60u;
    {
        const bool branch_taken_0x263a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x263a60) {
            ctx->pc = 0x263A70u;
            return;
        }
    }
    ctx->pc = 0x263A68u;
    // 0x263a68: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x263A68u;
    {
        const bool branch_taken_0x263a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263a68) {
            ctx->pc = 0x263BD8u;
            return;
        }
    }
    ctx->pc = 0x263A70u;
}
