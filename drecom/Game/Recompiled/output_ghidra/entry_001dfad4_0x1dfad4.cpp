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

// Function: entry_001dfad4
// Address: 0x1dfad4 - 0x1dfb24
void entry_001dfad4_0x1dfad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfad4_0x1dfad4");
#endif

    ctx->pc = 0x1dfad4u;

    // 0x1dfad4: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x1dfad4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dfad8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1dfad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dfadc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dfadcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dfae0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1dfae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1dfae4: 0x8c700010  lw          $s0, 0x10($v1)
    ctx->pc = 0x1dfae4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1dfae8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1dfae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dfaec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1dfaecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dfaf0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1dfaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1dfaf4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DFAF4u;
    {
        const bool branch_taken_0x1dfaf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfaf4) {
            ctx->pc = 0x1DFB24u;
            return;
        }
    }
    ctx->pc = 0x1DFAFCu;
    // 0x1dfafc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1dfafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dfb00: 0xa6030030  sh          $v1, 0x30($s0)
    ctx->pc = 0x1dfb00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dfb04: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1dfb04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1dfb08: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x1dfb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x1dfb0c: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x1dfb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1dfb10: 0x3c036c08  lui         $v1, 0x6C08
    ctx->pc = 0x1dfb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27656 << 16));
    // 0x1dfb14: 0x34630084  ori         $v1, $v1, 0x84
    ctx->pc = 0x1dfb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)132);
    // 0x1dfb18: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1dfb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1dfb1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DFB1Cu;
    {
        const bool branch_taken_0x1dfb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfb1c) {
            ctx->pc = 0x1DFB30u;
            return;
        }
    }
    ctx->pc = 0x1DFB24u;
}
