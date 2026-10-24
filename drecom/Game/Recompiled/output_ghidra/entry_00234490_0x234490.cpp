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

// Function: entry_00234490
// Address: 0x234490 - 0x2344f8
void entry_00234490_0x234490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00234490_0x234490");
#endif

    ctx->pc = 0x234490u;

    // 0x234490: 0x8e870060  lw          $a3, 0x60($s4)
    ctx->pc = 0x234490u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x234494: 0x24e4fffc  addiu       $a0, $a3, -0x4
    ctx->pc = 0x234494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x234498: 0xae840060  sw          $a0, 0x60($s4)
    ctx->pc = 0x234498u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 4));
    // 0x23449c: 0x8e860064  lw          $a2, 0x64($s4)
    ctx->pc = 0x23449cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x2344a0: 0x24c4fffc  addiu       $a0, $a2, -0x4
    ctx->pc = 0x2344a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x2344a4: 0xae840064  sw          $a0, 0x64($s4)
    ctx->pc = 0x2344a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 4));
    // 0x2344a8: 0x8e840068  lw          $a0, 0x68($s4)
    ctx->pc = 0x2344a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x2344ac: 0x2496fffc  addiu       $s6, $a0, -0x4
    ctx->pc = 0x2344acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2344b0: 0xae960068  sw          $s6, 0x68($s4)
    ctx->pc = 0x2344b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 22));
    // 0x2344b4: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x2344b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x2344b8: 0x2485fffc  addiu       $a1, $a0, -0x4
    ctx->pc = 0x2344b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2344bc: 0xae650060  sw          $a1, 0x60($s3)
    ctx->pc = 0x2344bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 5));
    // 0x2344c0: 0x8e640064  lw          $a0, 0x64($s3)
    ctx->pc = 0x2344c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x2344c4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x2344c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2344c8: 0xae640064  sw          $a0, 0x64($s3)
    ctx->pc = 0x2344c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 4));
    // 0x2344cc: 0x8e640068  lw          $a0, 0x68($s3)
    ctx->pc = 0x2344ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x2344d0: 0x2483fffc  addiu       $v1, $a0, -0x4
    ctx->pc = 0x2344d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2344d4: 0xae630068  sw          $v1, 0x68($s3)
    ctx->pc = 0x2344d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 3));
    // 0x2344d8: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x2344d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x2344dc: 0x2c810041  sltiu       $at, $a0, 0x41
    ctx->pc = 0x2344dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x2344e0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2344E0u;
    {
        const bool branch_taken_0x2344e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2344e0) {
            ctx->pc = 0x2344F8u;
            return;
        }
    }
    ctx->pc = 0x2344E8u;
    // 0x2344e8: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x2344e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2344ec: 0x94c50002  lhu         $a1, 0x2($a2)
    ctx->pc = 0x2344ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2344f0: 0x30a4bfff  andi        $a0, $a1, 0xBFFF
    ctx->pc = 0x2344f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)49151);
    // 0x2344f4: 0xa4c40002  sh          $a0, 0x2($a2)
    ctx->pc = 0x2344f4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2344f8u;
}
