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

// Function: entry_002f0548
// Address: 0x2f0548 - 0x2f05b8
void entry_002f0548_0x2f0548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f0548_0x2f0548");
#endif

    switch (ctx->pc) {
        case 0x2f05a4u: goto label_2f05a4;
        default: break;
    }

    ctx->pc = 0x2f0548u;

    // 0x2f0548: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f0548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f054c: 0x24428d80  addiu       $v0, $v0, -0x7280
    ctx->pc = 0x2f054cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937984));
    // 0x2f0550: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f0550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f0554: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f0554u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f0558: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f0558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f055c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2f055cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0560: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f0560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0564: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x2f0564u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0568: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2f0568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f056c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f056cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0570: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x2f0570u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0574: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2f0574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0578: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f0578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f057c: 0x46000bc2  mul.s       $f15, $f1, $f0
    ctx->pc = 0x2f057cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0580: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f0580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f0584: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f0584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f0588: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f0588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f058c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2f058cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f0590: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x2f0590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f0594: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x2f0594u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f0598: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x2f0598u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f059c: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2F059Cu;
    SET_GPR_U32(ctx, 31, 0x2F05A4u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2F059Cu, 0x2F05A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F05A4u;
label_2f05a4:
    // 0x2f05a4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2f05a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f05a8: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f05a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f05ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f05acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f05b0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2f05b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2f05b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f05b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x2f05b8u;
}
