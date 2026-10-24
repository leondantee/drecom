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

// Function: entry_00259908
// Address: 0x259908 - 0x25997c
void entry_00259908_0x259908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00259908_0x259908");
#endif

    ctx->pc = 0x259908u;

    // 0x259908: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25990c: 0x8c420350  lw          $v0, 0x350($v0)
    ctx->pc = 0x25990cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
    // 0x259910: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x259910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x259914: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x259914u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x259918: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x259918u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x25991c: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x25991cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x259920: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x259920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x259924: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x259924u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x259928: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25992c: 0x8c420350  lw          $v0, 0x350($v0)
    ctx->pc = 0x25992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
    // 0x259930: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x259930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x259934: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x259934u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259938: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x259938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25993c: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x25993cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x259940: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x259940u;
    {
        const bool branch_taken_0x259940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259940) {
            ctx->pc = 0x259A9Cu;
            return;
        }
    }
    ctx->pc = 0x259948u;
    // 0x259948: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25994c: 0x8c420350  lw          $v0, 0x350($v0)
    ctx->pc = 0x25994cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
    // 0x259950: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x259950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x259954: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x259954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259958: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x259958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25995c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x25995cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x259960: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x259960u;
    {
        const bool branch_taken_0x259960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x259960) {
            ctx->pc = 0x2599C4u;
            return;
        }
    }
    ctx->pc = 0x259968u;
    // 0x259968: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x259968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25996c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25996Cu;
    {
        const bool branch_taken_0x25996c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25996c) {
            ctx->pc = 0x25997Cu;
            return;
        }
    }
    ctx->pc = 0x259974u;
    // 0x259974: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x259974u;
    {
        const bool branch_taken_0x259974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259974) {
            ctx->pc = 0x259A0Cu;
            return;
        }
    }
    ctx->pc = 0x25997Cu;
}
