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

// Function: entry_00371504
// Address: 0x371504 - 0x37155c
void entry_00371504_0x371504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371504_0x371504");
#endif

    switch (ctx->pc) {
        case 0x371518u: goto label_371518;
        case 0x371524u: goto label_371524;
        case 0x371550u: goto label_371550;
        default: break;
    }

    ctx->pc = 0x371504u;

    // 0x371504: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x371504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x371508: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x371508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37150c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x37150cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x371510: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x371510u;
    SET_GPR_U32(ctx, 31, 0x371518u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x371510u, 0x371518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371518u;
label_371518:
    // 0x371518: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x371518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37151c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x37151Cu;
    SET_GPR_U32(ctx, 31, 0x371524u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x37151Cu, 0x371524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371524u;
label_371524:
    // 0x371524: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x371524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371528: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x371528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x37152c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x37152Cu;
    {
        const bool branch_taken_0x37152c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37152c) {
            ctx->pc = 0x37155Cu;
            return;
        }
    }
    ctx->pc = 0x371534u;
    // 0x371534: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x371534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371538: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x371538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x37153c: 0x24060a01  addiu       $a2, $zero, 0xA01
    ctx->pc = 0x37153cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2561));
    // 0x371540: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x371540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x371544: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x371544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x371548: 0xc0965d0  jal         func_259740
    ctx->pc = 0x371548u;
    SET_GPR_U32(ctx, 31, 0x371550u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x371548u, 0x371550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371550u;
label_371550:
    // 0x371550: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x371550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x371554: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x371554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371558: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x371558u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x37155cu;
}
