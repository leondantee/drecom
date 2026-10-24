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

// Function: entry_001225c8
// Address: 0x1225c8 - 0x122664
void entry_001225c8_0x1225c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001225c8_0x1225c8");
#endif

    switch (ctx->pc) {
        case 0x122614u: goto label_122614;
        default: break;
    }

    ctx->pc = 0x1225c8u;

    // 0x1225c8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1225c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1225cc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1225ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1225d0: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x1225d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x1225d4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1225d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1225d8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1225d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1225dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1225dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1225e0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1225e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1225e4: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x1225e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x1225e8: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x1225e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1225ec: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1225ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x1225f0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1225f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1225f4: 0xc48111f8  lwc1        $f1, 0x11F8($a0)
    ctx->pc = 0x1225f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1225f8: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x1225f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x1225fc: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x1225fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x122600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x122600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122604: 0x0  nop
    ctx->pc = 0x122604u;
    // NOP
    // 0x122608: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x122608u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12260c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x12260Cu;
    SET_GPR_U32(ctx, 31, 0x122614u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x12260Cu, 0x122614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122614u;
label_122614:
    // 0x122614: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x122614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x122618: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12261c: 0x90a509df  lbu         $a1, 0x9DF($a1)
    ctx->pc = 0x12261cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2527)));
    // 0x122620: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x122620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x122624: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x122624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x122628: 0x146001c1  bnez        $v1, . + 4 + (0x1C1 << 2)
    ctx->pc = 0x122628u;
    {
        const bool branch_taken_0x122628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x122628) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x122630u;
    // 0x122630: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122634: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122638: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12263c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12263cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122640: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x122640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x122644: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122648: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x122648u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12264c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12264cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122650: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x122650u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x122654: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122658: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x122658u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x12265c: 0x100001b4  b           . + 4 + (0x1B4 << 2)
    ctx->pc = 0x12265Cu;
    {
        const bool branch_taken_0x12265c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12265c) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x122664u;
}
