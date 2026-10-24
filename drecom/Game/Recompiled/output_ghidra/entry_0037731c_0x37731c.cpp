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

// Function: entry_0037731c
// Address: 0x37731c - 0x3773a8
void entry_0037731c_0x37731c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037731c_0x37731c");
#endif

    switch (ctx->pc) {
        case 0x37733cu: goto label_37733c;
        case 0x377344u: goto label_377344;
        case 0x37734cu: goto label_37734c;
        case 0x377354u: goto label_377354;
        case 0x37735cu: goto label_37735c;
        case 0x377364u: goto label_377364;
        case 0x37736cu: goto label_37736c;
        case 0x377374u: goto label_377374;
        case 0x37737cu: goto label_37737c;
        case 0x377384u: goto label_377384;
        default: break;
    }

    ctx->pc = 0x37731cu;

    // 0x37731c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x37731cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x377320: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x377320u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x377324: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x377324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x377328: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x377328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x37732c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x37732Cu;
    {
        const bool branch_taken_0x37732c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37732c) {
            ctx->pc = 0x3773A8u;
            return;
        }
    }
    ctx->pc = 0x377334u;
    // 0x377334: 0xc0ddd2c  jal         func_3774B0
    ctx->pc = 0x377334u;
    SET_GPR_U32(ctx, 31, 0x37733Cu);
    ctx->pc = 0x3774B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3774B0u, 0x377334u, 0x37733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37733Cu;
label_37733c:
    // 0x37733c: 0xc0ddd5c  jal         func_377570
    ctx->pc = 0x37733Cu;
    SET_GPR_U32(ctx, 31, 0x377344u);
    ctx->pc = 0x377570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377570u, 0x37733Cu, 0x377344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377344u;
label_377344:
    // 0x377344: 0xc0ddda4  jal         func_377690
    ctx->pc = 0x377344u;
    SET_GPR_U32(ctx, 31, 0x37734Cu);
    ctx->pc = 0x377690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377690u, 0x377344u, 0x37734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37734Cu;
label_37734c:
    // 0x37734c: 0xc0dddfc  jal         func_3777F0
    ctx->pc = 0x37734Cu;
    SET_GPR_U32(ctx, 31, 0x377354u);
    ctx->pc = 0x3777F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3777F0u, 0x37734Cu, 0x377354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377354u;
label_377354:
    // 0x377354: 0xc0dde58  jal         func_377960
    ctx->pc = 0x377354u;
    SET_GPR_U32(ctx, 31, 0x37735Cu);
    ctx->pc = 0x377960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377960u, 0x377354u, 0x37735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37735Cu;
label_37735c:
    // 0x37735c: 0xc0dde80  jal         func_377A00
    ctx->pc = 0x37735Cu;
    SET_GPR_U32(ctx, 31, 0x377364u);
    ctx->pc = 0x377A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377A00u, 0x37735Cu, 0x377364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377364u;
label_377364:
    // 0x377364: 0xc0ddeb0  jal         func_377AC0
    ctx->pc = 0x377364u;
    SET_GPR_U32(ctx, 31, 0x37736Cu);
    ctx->pc = 0x377AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377AC0u, 0x377364u, 0x37736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37736Cu;
label_37736c:
    // 0x37736c: 0xc0dded4  jal         func_377B50
    ctx->pc = 0x37736Cu;
    SET_GPR_U32(ctx, 31, 0x377374u);
    ctx->pc = 0x377B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377B50u, 0x37736Cu, 0x377374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377374u;
label_377374:
    // 0x377374: 0xc0ddf1c  jal         func_377C70
    ctx->pc = 0x377374u;
    SET_GPR_U32(ctx, 31, 0x37737Cu);
    ctx->pc = 0x377C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377C70u, 0x377374u, 0x37737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37737Cu;
label_37737c:
    // 0x37737c: 0xc0ddf44  jal         func_377D10
    ctx->pc = 0x37737Cu;
    SET_GPR_U32(ctx, 31, 0x377384u);
    ctx->pc = 0x377D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377D10u, 0x37737Cu, 0x377384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377384u;
label_377384:
    // 0x377384: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377388: 0x90220397  lbu         $v0, 0x397($at)
    ctx->pc = 0x377388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x9A0397u));
    // 0x37738c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x37738Cu;
    {
        const bool branch_taken_0x37738c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37738c) {
            ctx->pc = 0x3773BCu;
            return;
        }
    }
    ctx->pc = 0x377394u;
    // 0x377394: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377398: 0x94220394  lhu         $v0, 0x394($at)
    ctx->pc = 0x377398u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x9A0394u));
    // 0x37739c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3773a0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3773a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3773a4: 0xa4220394  sh          $v0, 0x394($at)
    ctx->pc = 0x3773a4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x9A0394u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x9A0394u, _value); } while (0);
    ctx->pc = 0x3773a8u;
}
