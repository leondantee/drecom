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

// Function: entry_00327710
// Address: 0x327710 - 0x327744
void entry_00327710_0x327710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327710_0x327710");
#endif

    ctx->pc = 0x327710u;

    // 0x327710: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327714: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x327714u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x327718: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32771c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32771cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x327720: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x327720u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x327724: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x327724u;
    {
        const bool branch_taken_0x327724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x327724) {
            ctx->pc = 0x3276ACu;
            return;
        }
    }
    ctx->pc = 0x32772Cu;
    // 0x32772c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x32772cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327730: 0x8ca40b18  lw          $a0, 0xB18($a1)
    ctx->pc = 0x327730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2840)));
    // 0x327734: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x327734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x327738: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x327738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32773c: 0xaca30b18  sw          $v1, 0xB18($a1)
    ctx->pc = 0x32773cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2840), GPR_U32(ctx, 3));
    // 0x327740: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x327740u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x327744u;
}
