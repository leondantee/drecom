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

// Function: entry_001c44ec
// Address: 0x1c44ec - 0x1c4554
void entry_001c44ec_0x1c44ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c44ec_0x1c44ec");
#endif

    ctx->pc = 0x1c44ecu;

    // 0x1c44ec: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c44ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1c44f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c44f4: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x1c44f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
    // 0x1c44f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c44f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c44fc: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1C44FCu;
    {
        const bool branch_taken_0x1c44fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c44fc) {
            ctx->pc = 0x1C45FCu;
            return;
        }
    }
    ctx->pc = 0x1C4504u;
    // 0x1c4504: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4508: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x1c4508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
    // 0x1c450c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c450cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c4510: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c4510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c4514: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C4514u;
    {
        const bool branch_taken_0x1c4514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c4514) {
            ctx->pc = 0x1C4584u;
            return;
        }
    }
    ctx->pc = 0x1C451Cu;
    // 0x1c451c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c451cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c4520: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C4520u;
    {
        const bool branch_taken_0x1c4520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c4520) {
            ctx->pc = 0x1C4578u;
            return;
        }
    }
    ctx->pc = 0x1C4528u;
    // 0x1c4528: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c4528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c452c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C452Cu;
    {
        const bool branch_taken_0x1c452c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c452c) {
            ctx->pc = 0x1C456Cu;
            return;
        }
    }
    ctx->pc = 0x1C4534u;
    // 0x1c4534: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c4534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4538: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4538u;
    {
        const bool branch_taken_0x1c4538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c4538) {
            ctx->pc = 0x1C4560u;
            return;
        }
    }
    ctx->pc = 0x1C4540u;
    // 0x1c4540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4544: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4544u;
    {
        const bool branch_taken_0x1c4544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c4544) {
            ctx->pc = 0x1C4554u;
            return;
        }
    }
    ctx->pc = 0x1C454Cu;
    // 0x1c454c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C454Cu;
    {
        const bool branch_taken_0x1c454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c454c) {
            ctx->pc = 0x1C4588u;
            return;
        }
    }
    ctx->pc = 0x1C4554u;
}
