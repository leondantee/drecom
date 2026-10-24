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

// Function: entry_0015b6f0
// Address: 0x15b6f0 - 0x15b77c
void entry_0015b6f0_0x15b6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b6f0_0x15b6f0");
#endif

    switch (ctx->pc) {
        case 0x15b740u: goto label_15b740;
        case 0x15b774u: goto label_15b774;
        default: break;
    }

    ctx->pc = 0x15b6f0u;

    // 0x15b6f0: 0x92021921  lbu         $v0, 0x1921($s0)
    ctx->pc = 0x15b6f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6433)));
    // 0x15b6f4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x15B6F4u;
    {
        const bool branch_taken_0x15b6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b6f4) {
            ctx->pc = 0x15B7C4u;
            return;
        }
    }
    ctx->pc = 0x15B6FCu;
    // 0x15b6fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b700: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x15b700u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15b704: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x15b704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x15b708: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15b708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15b70c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x15B70Cu;
    {
        const bool branch_taken_0x15b70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b70c) {
            ctx->pc = 0x15B7C4u;
            return;
        }
    }
    ctx->pc = 0x15B714u;
    // 0x15b714: 0xa2001921  sb          $zero, 0x1921($s0)
    ctx->pc = 0x15b714u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6433), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b718: 0x8e1413e8  lw          $s4, 0x13E8($s0)
    ctx->pc = 0x15b718u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x15b71c: 0xae0013e8  sw          $zero, 0x13E8($s0)
    ctx->pc = 0x15b71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 0));
    // 0x15b720: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x15b720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15b724: 0xa2021920  sb          $v0, 0x1920($s0)
    ctx->pc = 0x15b724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6432), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b728: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x15B728u;
    {
        const bool branch_taken_0x15b728 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b728) {
            ctx->pc = 0x15B77Cu;
            return;
        }
    }
    ctx->pc = 0x15B730u;
    // 0x15b730: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x15b730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b734: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x15b734u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15b738: 0xc056f24  jal         func_15BC90
    ctx->pc = 0x15B738u;
    SET_GPR_U32(ctx, 31, 0x15B740u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x15B738u, 0x15B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B740u;
label_15b740:
    // 0x15b740: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x15B740u;
    {
        const bool branch_taken_0x15b740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b740) {
            ctx->pc = 0x15B7C0u;
            return;
        }
    }
    ctx->pc = 0x15B748u;
    // 0x15b748: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b74c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x15b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15b750: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15b750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15b754: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b758: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x15b758u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x15b75c: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x15b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15b760: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x15b760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
    // 0x15b764: 0xa6001574  sh          $zero, 0x1574($s0)
    ctx->pc = 0x15b764u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b768: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15b768u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15b76c: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x15B76Cu;
    SET_GPR_U32(ctx, 31, 0x15B774u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x15B76Cu, 0x15B774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B774u;
label_15b774:
    // 0x15b774: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x15B774u;
    {
        const bool branch_taken_0x15b774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b774) {
            ctx->pc = 0x15BC5Cu;
            return;
        }
    }
    ctx->pc = 0x15B77Cu;
}
