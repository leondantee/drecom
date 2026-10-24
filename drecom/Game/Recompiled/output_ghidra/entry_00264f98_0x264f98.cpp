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

// Function: entry_00264f98
// Address: 0x264f98 - 0x26502c
void entry_00264f98_0x264f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264f98_0x264f98");
#endif

    ctx->pc = 0x264f98u;

    // 0x264f98: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x264f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x264f9c: 0x2e3182b  sltu        $v1, $s7, $v1
    ctx->pc = 0x264f9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x264fa0: 0x1460fecb  bnez        $v1, . + 4 + (-0x135 << 2)
    ctx->pc = 0x264FA0u;
    {
        const bool branch_taken_0x264fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x264fa0) {
            ctx->pc = 0x264AD0u;
            return;
        }
    }
    ctx->pc = 0x264FA8u;
    // 0x264fa8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264fac: 0x9025e650  lbu         $a1, -0x19B0($at)
    ctx->pc = 0x264facu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x61E650u));
    // 0x264fb0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x264fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x264fb4: 0x946310a4  lhu         $v1, 0x10A4($v1)
    ctx->pc = 0x264fb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x264fb8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x264fb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x264fbc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x264fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x264fc0: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x264fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x264fc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264fc8: 0xa0650004  sb          $a1, 0x4($v1)
    ctx->pc = 0x264fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x264fcc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264fd0: 0xac33e680  sw          $s3, -0x1980($at)
    ctx->pc = 0x264fd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x61E680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E680u, _value); } while (0);
    // 0x264fd4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264fd8: 0xac34e67c  sw          $s4, -0x1984($at)
    ctx->pc = 0x264fd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x61E67Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E67Cu, _value); } while (0);
    // 0x264fdc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264fe0: 0x9024e650  lbu         $a0, -0x19B0($at)
    ctx->pc = 0x264fe0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x61E650u));
    // 0x264fe4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264fe8: 0x9023e653  lbu         $v1, -0x19AD($at)
    ctx->pc = 0x264fe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E653u));
    // 0x264fec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x264fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x264ff0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264ff4: 0xa023e650  sb          $v1, -0x19B0($at)
    ctx->pc = 0x264ff4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61E650u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E650u, _value); } while (0);
    // 0x264ff8: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x264ff8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x264ffc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x264ffcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x265000: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x265000u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x265004: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x265004u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x265008: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x265008u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26500c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26500cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x265010: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x265010u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265014: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x265014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265018: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x265018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26501c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26501cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265020: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x265020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x265024: 0x3e00008  jr          $ra
    ctx->pc = 0x265024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26502Cu;
}
