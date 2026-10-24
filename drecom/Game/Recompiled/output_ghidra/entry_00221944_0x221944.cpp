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

// Function: entry_00221944
// Address: 0x221944 - 0x221980
void entry_00221944_0x221944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221944_0x221944");
#endif

    ctx->pc = 0x221944u;

    // 0x221944: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221948: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x221948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22194c: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x22194cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x221950: 0x3486c000  ori         $a2, $a0, 0xC000
    ctx->pc = 0x221950u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x221954: 0xac660030  sw          $a2, 0x30($v1)
    ctx->pc = 0x221954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
    // 0x221958: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x22195c: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x22195cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x221960: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x221960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x221964: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x221964u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x221968: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221968u;
    {
        const bool branch_taken_0x221968 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x221968) {
            ctx->pc = 0x221980u;
            return;
        }
    }
    ctx->pc = 0x221970u;
    // 0x221970: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x221970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221974: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221978: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x221978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x22197c: 0xa4c3005e  sh          $v1, 0x5E($a2)
    ctx->pc = 0x22197cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 94), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x221980u;
}
