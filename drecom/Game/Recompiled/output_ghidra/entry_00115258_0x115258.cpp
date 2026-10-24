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

// Function: entry_00115258
// Address: 0x115258 - 0x115290
void entry_00115258_0x115258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115258_0x115258");
#endif

    ctx->pc = 0x115258u;

    // 0x115258: 0x286200ff  slti        $v0, $v1, 0xFF
    ctx->pc = 0x115258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x11525c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11525Cu;
    {
        const bool branch_taken_0x11525c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11525c) {
            ctx->pc = 0x1152B4u;
            return;
        }
    }
    ctx->pc = 0x115264u;
    // 0x115264: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x115264u;
    {
        const bool branch_taken_0x115264 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x115268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115264u;
        // 0x115268: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115264) {
            ctx->pc = 0x115290u;
            return;
        }
    }
    ctx->pc = 0x11526Cu;
    // 0x11526c: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x11526cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x115270: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x115270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x115274: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x115274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x115278: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x115278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11527c: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x11527cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x115280: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x115280u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115284: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x115284u;
    {
        const bool branch_taken_0x115284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115284u;
        // 0x115288: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x115284) {
            ctx->pc = 0x115308u;
            return;
        }
    }
    ctx->pc = 0x11528Cu;
    // 0x11528c: 0x0  nop
    ctx->pc = 0x11528cu;
    // NOP
    ctx->pc = 0x115290u;
}
