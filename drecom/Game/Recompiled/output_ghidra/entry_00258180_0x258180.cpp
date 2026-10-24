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

// Function: entry_00258180
// Address: 0x258180 - 0x2581dc
void entry_00258180_0x258180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258180_0x258180");
#endif

    ctx->pc = 0x258180u;

    // 0x258180: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x258180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x258184: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x258184u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x258188: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x258188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25818c: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x25818cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x258190: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x258190u;
    {
        const bool branch_taken_0x258190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x258190) {
            ctx->pc = 0x25824Cu;
            return;
        }
    }
    ctx->pc = 0x258198u;
    // 0x258198: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x258198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x25819c: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x25819cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2581a0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2581a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2581a4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2581a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2581a8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2581A8u;
    {
        const bool branch_taken_0x2581a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2581a8) {
            ctx->pc = 0x2581FCu;
            return;
        }
    }
    ctx->pc = 0x2581B0u;
    // 0x2581b0: 0x93a300c8  lbu         $v1, 0xC8($sp)
    ctx->pc = 0x2581b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2581b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2581b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2581b8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2581B8u;
    {
        const bool branch_taken_0x2581b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2581b8) {
            ctx->pc = 0x2581DCu;
            return;
        }
    }
    ctx->pc = 0x2581C0u;
    // 0x2581c0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2581c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2581c4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2581c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2581c8: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x2581c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x2581cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2581ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2581d0: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x2581d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x2581d4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2581D4u;
    {
        const bool branch_taken_0x2581d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2581d4) {
            ctx->pc = 0x2582A0u;
            return;
        }
    }
    ctx->pc = 0x2581DCu;
}
