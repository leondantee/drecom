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

// Function: entry_00214c80
// Address: 0x214c80 - 0x214d10
void entry_00214c80_0x214c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214c80_0x214c80");
#endif

    ctx->pc = 0x214c80u;

label_214c80:
    // 0x214c80: 0x42000039  di
    ctx->pc = 0x214c80u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x214c84: 0x40f  sync.p
    ctx->pc = 0x214c84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x214c88: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x214c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x214c8c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x214c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x214c90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x214c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x214c94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x214C94u;
    {
        const bool branch_taken_0x214c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214c94) {
            ctx->pc = 0x214C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214c80;
        }
    }
    ctx->pc = 0x214C9Cu;
    // 0x214c9c: 0x8d22aad8  lw          $v0, -0x5528($t1)
    ctx->pc = 0x214c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294945496)));
    // 0x214ca0: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x214CA0u;
    {
        const bool branch_taken_0x214ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CA0u;
        // 0x214ca4: 0x3c130062  lui         $s3, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ca0) {
            ctx->pc = 0x214ED8u;
            return;
        }
    }
    ctx->pc = 0x214CA8u;
    // 0x214ca8: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x214ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x214cac: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x214cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x214cb0: 0x24a5a200  addiu       $a1, $a1, -0x5E00
    ctx->pc = 0x214cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943232));
    // 0x214cb4: 0x2666a180  addiu       $a2, $s3, -0x5E80
    ctx->pc = 0x214cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294943104));
    // 0x214cb8: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x214cb8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
    // 0x214cbc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x214cbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x214cc0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x214cc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x214cc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x214cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214cc8: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x214cc8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
    // 0x214ccc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x214cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x214cd0: 0x2642a258  addiu       $v0, $s2, -0x5DA8
    ctx->pc = 0x214cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943320));
    // 0x214cd4: 0xad23aad8  sw          $v1, -0x5528($t1)
    ctx->pc = 0x214cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294945496), GPR_U32(ctx, 3));
    // 0x214cd8: 0x2548a280  addiu       $t0, $t2, -0x5D80
    ctx->pc = 0x214cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943360));
    // 0x214cdc: 0xae46a258  sw          $a2, -0x5DA8($s2)
    ctx->pc = 0x214cdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x61A258u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61A258u, _value); } while (0);
    // 0x214ce0: 0x2484a380  addiu       $a0, $a0, -0x5C80
    ctx->pc = 0x214ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943616));
    // 0x214ce4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x214ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x214ce8: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x214ce8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x61A274u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61A274u, _value); } while (0);
    // 0x214cec: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x214cecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x61A25Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61A25Cu, _value); } while (0);
    // 0x214cf0: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x214cf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cf4: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x214cf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x61A268u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61A268u, _value); } while (0);
    // 0x214cf8: 0x3c140062  lui         $s4, 0x62
    ctx->pc = 0x214cf8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
    // 0x214cfc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x214cfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61A260u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61A260u, _value); } while (0);
    // 0x214d00: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x214d00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x214d04: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x214d04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x61A264u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61A264u, _value); } while (0);
    // 0x214d08: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x214d08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61A26Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61A26Cu, _value); } while (0);
    // 0x214d0c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x214d0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61A270u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61A270u, _value); } while (0);
    ctx->pc = 0x214d10u;
}
