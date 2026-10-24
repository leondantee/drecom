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

// Function: entry_0033aba4
// Address: 0x33aba4 - 0x33ac0c
void entry_0033aba4_0x33aba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033aba4_0x33aba4");
#endif

    ctx->pc = 0x33aba4u;

    // 0x33aba4: 0x320300f0  andi        $v1, $s0, 0xF0
    ctx->pc = 0x33aba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)240);
    // 0x33aba8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x33aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x33abac: 0x10620133  beq         $v1, $v0, . + 4 + (0x133 << 2)
    ctx->pc = 0x33ABACu;
    {
        const bool branch_taken_0x33abac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33abac) {
            ctx->pc = 0x33B07Cu;
            return;
        }
    }
    ctx->pc = 0x33ABB4u;
    // 0x33abb4: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x33abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x33abb8: 0x10620130  beq         $v1, $v0, . + 4 + (0x130 << 2)
    ctx->pc = 0x33ABB8u;
    {
        const bool branch_taken_0x33abb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33abb8) {
            ctx->pc = 0x33B07Cu;
            return;
        }
    }
    ctx->pc = 0x33ABC0u;
    // 0x33abc0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x33abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33abc4: 0x106200c5  beq         $v1, $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x33ABC4u;
    {
        const bool branch_taken_0x33abc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33abc4) {
            ctx->pc = 0x33AEDCu;
            return;
        }
    }
    ctx->pc = 0x33ABCCu;
    // 0x33abcc: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x33abccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x33abd0: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x33ABD0u;
    {
        const bool branch_taken_0x33abd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33abd0) {
            ctx->pc = 0x33ACF4u;
            return;
        }
    }
    ctx->pc = 0x33ABD8u;
    // 0x33abd8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x33abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x33abdc: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x33ABDCu;
    {
        const bool branch_taken_0x33abdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33abdc) {
            ctx->pc = 0x33ACF4u;
            return;
        }
    }
    ctx->pc = 0x33ABE4u;
    // 0x33abe4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x33abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33abe8: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x33ABE8u;
    {
        const bool branch_taken_0x33abe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33abe8) {
            ctx->pc = 0x33AC8Cu;
            return;
        }
    }
    ctx->pc = 0x33ABF0u;
    // 0x33abf0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x33abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33abf4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x33ABF4u;
    {
        const bool branch_taken_0x33abf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33abf4) {
            ctx->pc = 0x33AC48u;
            return;
        }
    }
    ctx->pc = 0x33ABFCu;
    // 0x33abfc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33ABFCu;
    {
        const bool branch_taken_0x33abfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33abfc) {
            ctx->pc = 0x33AC0Cu;
            return;
        }
    }
    ctx->pc = 0x33AC04u;
    // 0x33ac04: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x33AC04u;
    {
        const bool branch_taken_0x33ac04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ac04) {
            ctx->pc = 0x33B098u;
            return;
        }
    }
    ctx->pc = 0x33AC0Cu;
}
