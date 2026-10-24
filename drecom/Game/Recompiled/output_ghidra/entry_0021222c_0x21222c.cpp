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

// Function: entry_0021222c
// Address: 0x21222c - 0x212268
void entry_0021222c_0x21222c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021222c_0x21222c");
#endif

    ctx->pc = 0x21222cu;

    // 0x21222c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x21222cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x212230: 0xac3096d0  sw          $s0, -0x6930($at)
    ctx->pc = 0x212230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x6196D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6196D0u, _value); } while (0);
    // 0x212234: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x212234u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x212238: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x212238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x21223c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21223cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212240: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x212240u;
    {
        const bool branch_taken_0x212240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x212240) {
            ctx->pc = 0x2122B8u;
            return;
        }
    }
    ctx->pc = 0x212248u;
    // 0x212248: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x212248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21224c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x21224Cu;
    {
        const bool branch_taken_0x21224c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21224c) {
            ctx->pc = 0x212290u;
            return;
        }
    }
    ctx->pc = 0x212254u;
    // 0x212254: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x212254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x212258: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x212258u;
    {
        const bool branch_taken_0x212258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x212258) {
            ctx->pc = 0x212268u;
            return;
        }
    }
    ctx->pc = 0x212260u;
    // 0x212260: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x212260u;
    {
        const bool branch_taken_0x212260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212260) {
            ctx->pc = 0x2122D0u;
            return;
        }
    }
    ctx->pc = 0x212268u;
}
