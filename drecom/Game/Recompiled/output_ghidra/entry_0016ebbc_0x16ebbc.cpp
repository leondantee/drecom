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

// Function: entry_0016ebbc
// Address: 0x16ebbc - 0x16ebf0
void entry_0016ebbc_0x16ebbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ebbc_0x16ebbc");
#endif

    ctx->pc = 0x16ebbcu;

    // 0x16ebbc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16ebbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16ebc0: 0x8c24bb40  lw          $a0, -0x44C0($at)
    ctx->pc = 0x16ebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47BB40u));
    // 0x16ebc4: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x16ebc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16ebc8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x16ebc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16ebcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16ebd0: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x16ebd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16ebd4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x16EBD4u;
    {
        const bool branch_taken_0x16ebd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ebd4) {
            ctx->pc = 0x16EBF0u;
            return;
        }
    }
    ctx->pc = 0x16EBDCu;
    // 0x16ebdc: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x16ebdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16ebe0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16ebe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16ebe4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x16ebe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16ebe8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16ebe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16ebec: 0xac25bb40  sw          $a1, -0x44C0($at)
    ctx->pc = 0x16ebecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x47BB40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BB40u, _value); } while (0);
    ctx->pc = 0x16ebf0u;
}
