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

// Function: entry_002e5260
// Address: 0x2e5260 - 0x2e52c8
void entry_002e5260_0x2e5260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e5260_0x2e5260");
#endif

    switch (ctx->pc) {
        case 0x2e5270u: goto label_2e5270;
        case 0x2e527cu: goto label_2e527c;
        case 0x2e528cu: goto label_2e528c;
        case 0x2e5298u: goto label_2e5298;
        default: break;
    }

    ctx->pc = 0x2e5260u;

    // 0x2e5260: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e5260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5264: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e5264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e5268: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E5268u;
    SET_GPR_U32(ctx, 31, 0x2E5270u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E5268u, 0x2E5270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5270u;
label_2e5270:
    // 0x2e5270: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e5270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5274: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2E5274u;
    SET_GPR_U32(ctx, 31, 0x2E527Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2E5274u, 0x2E527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E527Cu;
label_2e527c:
    // 0x2e527c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e527cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5280: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e5280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e5284: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E5284u;
    SET_GPR_U32(ctx, 31, 0x2E528Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E5284u, 0x2E528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E528Cu;
label_2e528c:
    // 0x2e528c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e528cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5290: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E5290u;
    SET_GPR_U32(ctx, 31, 0x2E5298u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E5290u, 0x2E5298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5298u;
label_2e5298:
    // 0x2e5298: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e529c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e529cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e52a0: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2E52A0u;
    {
        const bool branch_taken_0x2e52a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e52a0) {
            ctx->pc = 0x2E5368u;
            return;
        }
    }
    ctx->pc = 0x2E52A8u;
    // 0x2e52a8: 0x8e3000ac  lw          $s0, 0xAC($s1)
    ctx->pc = 0x2e52a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2e52ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e52acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e52b0: 0x8c24efa8  lw          $a0, -0x1058($at)
    ctx->pc = 0x2e52b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x2e52b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e52b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e52b8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E52B8u;
    {
        const bool branch_taken_0x2e52b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e52b8) {
            ctx->pc = 0x2E52C8u;
            return;
        }
    }
    ctx->pc = 0x2E52C0u;
    // 0x2e52c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e52c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e52c4: 0xac30efa8  sw          $s0, -0x1058($at)
    ctx->pc = 0x2e52c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3EEFA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEFA8u, _value); } while (0);
    ctx->pc = 0x2e52c8u;
}
