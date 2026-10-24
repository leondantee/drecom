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

// Function: entry_00321530
// Address: 0x321530 - 0x3215e8
void entry_00321530_0x321530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321530_0x321530");
#endif

    switch (ctx->pc) {
        case 0x321550u: goto label_321550;
        case 0x32156cu: goto label_32156c;
        case 0x3215a4u: goto label_3215a4;
        default: break;
    }

    ctx->pc = 0x321530u;

    // 0x321530: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x321530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321534: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321538: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32153c: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x32153cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x321540: 0x246502f0  addiu       $a1, $v1, 0x2F0
    ctx->pc = 0x321540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x321544: 0x24460300  addiu       $a2, $v0, 0x300
    ctx->pc = 0x321544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x321548: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x321548u;
    SET_GPR_U32(ctx, 31, 0x321550u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x321548u, 0x321550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321550u;
label_321550:
    // 0x321550: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321554: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321558: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x321558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32155c: 0x246502f0  addiu       $a1, $v1, 0x2F0
    ctx->pc = 0x32155cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x321560: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x321560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x321564: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x321564u;
    SET_GPR_U32(ctx, 31, 0x32156Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x321564u, 0x32156Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32156Cu;
label_32156c:
    // 0x32156c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x32156cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x321570: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x321570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321574: 0x0  nop
    ctx->pc = 0x321574u;
    // NOP
    // 0x321578: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x321578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x32157c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x32157cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321580: 0x8c630270  lw          $v1, 0x270($v1)
    ctx->pc = 0x321580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 624)));
    // 0x321584: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x321584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x321588: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x321588u;
    {
        const bool branch_taken_0x321588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321588) {
            ctx->pc = 0x321604u;
            return;
        }
    }
    ctx->pc = 0x321590u;
    // 0x321590: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321594: 0x244402b0  addiu       $a0, $v0, 0x2B0
    ctx->pc = 0x321594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x321598: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x321598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32159c: 0xc0c802c  jal         func_3200B0
    ctx->pc = 0x32159Cu;
    SET_GPR_U32(ctx, 31, 0x3215A4u);
    ctx->pc = 0x3200B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3200B0u, 0x32159Cu, 0x3215A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3215A4u;
label_3215a4:
    // 0x3215a4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3215A4u;
    {
        const bool branch_taken_0x3215a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3215a4) {
            ctx->pc = 0x3215E8u;
            return;
        }
    }
    ctx->pc = 0x3215ACu;
    // 0x3215ac: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x3215acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3215b0: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x3215b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x3215b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3215b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3215b8: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x3215b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x3215bc: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x3215bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3215c0: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x3215c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x3215c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3215c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3215c8: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x3215c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x3215cc: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3215ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3215d0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3215d0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3215d4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3215d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3215d8: 0x246302b0  addiu       $v1, $v1, 0x2B0
    ctx->pc = 0x3215d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x3215dc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3215dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3215e0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3215E0u;
    {
        const bool branch_taken_0x3215e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3215e0) {
            ctx->pc = 0x321638u;
            return;
        }
    }
    ctx->pc = 0x3215E8u;
}
