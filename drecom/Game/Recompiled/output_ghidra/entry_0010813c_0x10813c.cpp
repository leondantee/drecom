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

// Function: entry_0010813c
// Address: 0x10813c - 0x10818c
void entry_0010813c_0x10813c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010813c_0x10813c");
#endif

    ctx->pc = 0x10813cu;

    // 0x10813c: 0x15c00013  bnez        $t6, . + 4 + (0x13 << 2)
    ctx->pc = 0x10813Cu;
    {
        const bool branch_taken_0x10813c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x108140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10813Cu;
        // 0x108140: 0x3c0c0038  lui         $t4, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10813c) {
            ctx->pc = 0x10818Cu;
            return;
        }
    }
    ctx->pc = 0x108144u;
    // 0x108144: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x108144u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x108148: 0x8cc83c00  lw          $t0, 0x3C00($a2)
    ctx->pc = 0x108148u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x383C00u));
    // 0x10814c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x10814cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x108150: 0x8d873c04  lw          $a3, 0x3C04($t4)
    ctx->pc = 0x108150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 15364)));
    // 0x108154: 0x3c0b0038  lui         $t3, 0x38
    ctx->pc = 0x108154u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)56 << 16));
    // 0x108158: 0xad883c04  sw          $t0, 0x3C04($t4)
    ctx->pc = 0x108158u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 15364), GPR_U32(ctx, 8));
    // 0x10815c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x10815cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x108160: 0x8ca83c0c  lw          $t0, 0x3C0C($a1)
    ctx->pc = 0x108160u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x383C0Cu));
    // 0x108164: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x108164u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x108168: 0x8d633c10  lw          $v1, 0x3C10($t3)
    ctx->pc = 0x108168u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383C10u));
    // 0x10816c: 0xad683c10  sw          $t0, 0x3C10($t3)
    ctx->pc = 0x10816cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x383C10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383C10u, _value); } while (0);
    // 0x108170: 0x8c883c18  lw          $t0, 0x3C18($a0)
    ctx->pc = 0x108170u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x383C18u));
    // 0x108174: 0x8d223c1c  lw          $v0, 0x3C1C($t1)
    ctx->pc = 0x108174u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383C1Cu));
    // 0x108178: 0xacc73c00  sw          $a3, 0x3C00($a2)
    ctx->pc = 0x108178u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x383C00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383C00u, _value); } while (0);
    // 0x10817c: 0xaca33c0c  sw          $v1, 0x3C0C($a1)
    ctx->pc = 0x10817cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x383C0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383C0Cu, _value); } while (0);
    // 0x108180: 0xac823c18  sw          $v0, 0x3C18($a0)
    ctx->pc = 0x108180u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x383C18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383C18u, _value); } while (0);
    // 0x108184: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x108184u;
    {
        const bool branch_taken_0x108184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108184u;
        // 0x108188: 0xad283c1c  sw          $t0, 0x3C1C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 15388), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108184) {
            ctx->pc = 0x108194u;
            return;
        }
    }
    ctx->pc = 0x10818Cu;
}
