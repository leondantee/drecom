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

// Function: entry_002e2a3c
// Address: 0x2e2a3c - 0x2e2bb4
void entry_002e2a3c_0x2e2a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2a3c_0x2e2a3c");
#endif

    switch (ctx->pc) {
        case 0x2e2a5cu: goto label_2e2a5c;
        default: break;
    }

    ctx->pc = 0x2e2a3cu;

    // 0x2e2a3c: 0xc601008c  lwc1        $f1, 0x8C($s0)
    ctx->pc = 0x2e2a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2a40: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x2e2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
    // 0x2e2a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2a48: 0x0  nop
    ctx->pc = 0x2e2a48u;
    // NOP
    // 0x2e2a4c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e2a4cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e2a50: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2a54: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x2E2A54u;
    SET_GPR_U32(ctx, 31, 0x2E2A5Cu);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x2E2A54u, 0x2E2A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2A5Cu;
label_2e2a5c:
    // 0x2e2a5c: 0x860300c8  lh          $v1, 0xC8($s0)
    ctx->pc = 0x2e2a5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2e2a60: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x2E2A60u;
    {
        const bool branch_taken_0x2e2a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2a60) {
            ctx->pc = 0x2E2BB4u;
            return;
        }
    }
    ctx->pc = 0x2E2A68u;
    // 0x2e2a68: 0x860300c8  lh          $v1, 0xC8($s0)
    ctx->pc = 0x2e2a68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2e2a6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e2a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e2a70: 0xa60300c8  sh          $v1, 0xC8($s0)
    ctx->pc = 0x2e2a70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 200), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e2a74: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2a78: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e2a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e2a7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2a80: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e2a80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e2a84: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e2a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e2a88: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e2a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e2a8c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e2a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2a90: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e2a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e2a94: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2a98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e2a98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2a9c: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x2e2a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2aa0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e2aa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e2aa4: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x2e2aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x2e2aa8: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2aac: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e2aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e2ab0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2ab4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e2ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e2ab8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e2ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e2abc: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e2abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e2ac0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e2ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2ac4: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e2ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e2ac8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2acc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e2accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2ad0: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x2e2ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2ad4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e2ad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e2ad8: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x2e2ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x2e2adc: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2ae0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e2ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e2ae4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2ae8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e2ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e2aec: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e2aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e2af0: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e2af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e2af4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e2af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2af8: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e2af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e2afc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2b00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e2b00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2b04: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x2e2b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2b08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e2b08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e2b0c: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x2e2b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x2e2b10: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2b14: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e2b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e2b18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2b1c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e2b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e2b20: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e2b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e2b24: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e2b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e2b28: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e2b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2b2c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e2b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e2b30: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2b34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e2b34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2b38: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x2e2b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2b3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e2b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e2b40: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x2e2b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x2e2b44: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2b48: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e2b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e2b4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2b50: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e2b50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e2b54: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e2b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e2b58: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e2b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e2b5c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e2b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2b60: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e2b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e2b64: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2b68: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e2b68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2b6c: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x2e2b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2b70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e2b70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e2b74: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x2e2b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x2e2b78: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2b7c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e2b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e2b80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2b84: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e2b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e2b88: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e2b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e2b8c: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e2b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e2b90: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e2b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2b94: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e2b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e2b98: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2b9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e2b9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2ba0: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x2e2ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2ba4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e2ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e2ba8: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x2e2ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x2e2bac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2BACu;
    {
        const bool branch_taken_0x2e2bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2bac) {
            ctx->pc = 0x2E2BB8u;
            return;
        }
    }
    ctx->pc = 0x2E2BB4u;
}
