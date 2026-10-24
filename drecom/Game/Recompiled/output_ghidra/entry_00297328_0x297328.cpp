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

// Function: entry_00297328
// Address: 0x297328 - 0x2973a4
void entry_00297328_0x297328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00297328_0x297328");
#endif

    ctx->pc = 0x297328u;

    // 0x297328: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x297328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29732c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29732cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297330: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x297330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x297334: 0x1062ffb3  beq         $v1, $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x297334u;
    {
        const bool branch_taken_0x297334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x297334) {
            ctx->pc = 0x297204u;
            return;
        }
    }
    ctx->pc = 0x29733Cu;
    // 0x29733c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x29733cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x297340: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297344: 0x28410062  slti        $at, $v0, 0x62
    ctx->pc = 0x297344u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)98) ? 1 : 0);
    // 0x297348: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x297348u;
    {
        const bool branch_taken_0x297348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x297348) {
            ctx->pc = 0x2973D8u;
            return;
        }
    }
    ctx->pc = 0x297350u;
    // 0x297350: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x297350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x297354: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297358: 0x2842005e  slti        $v0, $v0, 0x5E
    ctx->pc = 0x297358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)94) ? 1 : 0);
    // 0x29735c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x29735Cu;
    {
        const bool branch_taken_0x29735c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29735c) {
            ctx->pc = 0x2973D8u;
            return;
        }
    }
    ctx->pc = 0x297364u;
    // 0x297364: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x297364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x297368: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x297368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29736c: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x29736cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x297370: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x297370u;
    {
        const bool branch_taken_0x297370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x297370) {
            ctx->pc = 0x2973C8u;
            return;
        }
    }
    ctx->pc = 0x297378u;
    // 0x297378: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x297378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x29737c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29737Cu;
    {
        const bool branch_taken_0x29737c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29737c) {
            ctx->pc = 0x2973BCu;
            return;
        }
    }
    ctx->pc = 0x297384u;
    // 0x297384: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x297384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x297388: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x297388u;
    {
        const bool branch_taken_0x297388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x297388) {
            ctx->pc = 0x2973B0u;
            return;
        }
    }
    ctx->pc = 0x297390u;
    // 0x297390: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x297390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x297394: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297394u;
    {
        const bool branch_taken_0x297394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x297394) {
            ctx->pc = 0x2973A4u;
            return;
        }
    }
    ctx->pc = 0x29739Cu;
    // 0x29739c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29739Cu;
    {
        const bool branch_taken_0x29739c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29739c) {
            ctx->pc = 0x2973D0u;
            return;
        }
    }
    ctx->pc = 0x2973A4u;
}
