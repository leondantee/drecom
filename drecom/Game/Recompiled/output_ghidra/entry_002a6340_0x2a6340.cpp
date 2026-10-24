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

// Function: entry_002a6340
// Address: 0x2a6340 - 0x2a63d4
void entry_002a6340_0x2a6340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a6340_0x2a6340");
#endif

    switch (ctx->pc) {
        case 0x2a6370u: goto label_2a6370;
        case 0x2a639cu: goto label_2a639c;
        default: break;
    }

    ctx->pc = 0x2a6340u;

    // 0x2a6340: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a6340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6344: 0xc4c101a8  lwc1        $f1, 0x1A8($a2)
    ctx->pc = 0x2a6344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6348: 0x3c083a94  lui         $t0, 0x3A94
    ctx->pc = 0x2a6348u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)14996 << 16));
    // 0x2a634c: 0x3507f209  ori         $a3, $t0, 0xF209
    ctx->pc = 0x2a634cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)61961);
    // 0x2a6350: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a6350u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6354: 0x0  nop
    ctx->pc = 0x2a6354u;
    // NOP
    // 0x2a6358: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a6358u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a635c: 0xe4c001a8  swc1        $f0, 0x1A8($a2)
    ctx->pc = 0x2a635cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 424), bits); }
    // 0x2a6360: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6364: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x2a6364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a6368: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2A6368u;
    SET_GPR_U32(ctx, 31, 0x2A6370u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2A6368u, 0x2A6370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6370u;
label_2a6370:
    // 0x2a6370: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a6370u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6374: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x2a6374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x2a6378: 0x34829999  ori         $v0, $a0, 0x9999
    ctx->pc = 0x2a6378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
    // 0x2a637c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a637cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a6380: 0x34049999  ori         $a0, $zero, 0x9999
    ctx->pc = 0x2a6380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
    // 0x2a6384: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x2a6384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x2a6388: 0x3465999a  ori         $a1, $v1, 0x999A
    ctx->pc = 0x2a6388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2a638c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2a638cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2a6390: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a6390u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a6394: 0xc040048  jal         func_100120
    ctx->pc = 0x2A6394u;
    SET_GPR_U32(ctx, 31, 0x2A639Cu);
    ctx->pc = 0x100120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100120u, 0x2A6394u, 0x2A639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A639Cu;
label_2a639c:
    // 0x2a639c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a639cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a63a0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2A63A0u;
    {
        const bool branch_taken_0x2a63a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a63a0) {
            ctx->pc = 0x2A63D4u;
            return;
        }
    }
    ctx->pc = 0x2A63A8u;
    // 0x2a63a8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2a63a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a63ac: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a63acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a63b0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2a63b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a63b4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a63b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a63b8: 0x9464000e  lhu         $a0, 0xE($v1)
    ctx->pc = 0x2a63b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2a63bc: 0x30857fff  andi        $a1, $a0, 0x7FFF
    ctx->pc = 0x2a63bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x2a63c0: 0xa465000e  sh          $a1, 0xE($v1)
    ctx->pc = 0x2a63c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a63c4: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a63c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a63c8: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x2a63c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a63cc: 0x34e80200  ori         $t0, $a3, 0x200
    ctx->pc = 0x2a63ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)512);
    // 0x2a63d0: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x2a63d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    ctx->pc = 0x2a63d4u;
}
