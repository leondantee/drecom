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

// Function: entry_0032db5c
// Address: 0x32db5c - 0x32dbc0
void entry_0032db5c_0x32db5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032db5c_0x32db5c");
#endif

    switch (ctx->pc) {
        case 0x32dba8u: goto label_32dba8;
        case 0x32dbb4u: goto label_32dbb4;
        default: break;
    }

    ctx->pc = 0x32db5cu;

    // 0x32db5c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32db60: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32db60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32db64: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x32db64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x32db68: 0x34423a14  ori         $v0, $v0, 0x3A14
    ctx->pc = 0x32db68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14868);
    // 0x32db6c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32db6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32db70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32db70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32db74: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x32db74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32db78: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32db78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32db7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x32db7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32db80: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x32DB80u;
    {
        const bool branch_taken_0x32db80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32db80) {
            ctx->pc = 0x32DCC0u;
            return;
        }
    }
    ctx->pc = 0x32DB88u;
    // 0x32db88: 0x92825e04  lbu         $v0, 0x5E04($s4)
    ctx->pc = 0x32db88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24068)));
    // 0x32db8c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32db8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32db90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32db90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32db94: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32DB94u;
    {
        const bool branch_taken_0x32db94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32db94) {
            ctx->pc = 0x32DBC0u;
            return;
        }
    }
    ctx->pc = 0x32DB9Cu;
    // 0x32db9c: 0xc68c5e00  lwc1        $f12, 0x5E00($s4)
    ctx->pc = 0x32db9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32dba0: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x32DBA0u;
    SET_GPR_U32(ctx, 31, 0x32DBA8u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x32DBA0u, 0x32DBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DBA8u;
label_32dba8:
    // 0x32dba8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32dba8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32dbac: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x32DBACu;
    SET_GPR_U32(ctx, 31, 0x32DBB4u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x32DBACu, 0x32DBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DBB4u;
label_32dbb4:
    // 0x32dbb4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x32dbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x32dbb8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32DBB8u;
    {
        const bool branch_taken_0x32dbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dbb8) {
            ctx->pc = 0x32DBF8u;
            return;
        }
    }
    ctx->pc = 0x32DBC0u;
}
