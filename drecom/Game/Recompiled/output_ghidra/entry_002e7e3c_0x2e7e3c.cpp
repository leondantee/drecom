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

// Function: entry_002e7e3c
// Address: 0x2e7e3c - 0x2e7fb4
void entry_002e7e3c_0x2e7e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7e3c_0x2e7e3c");
#endif

    switch (ctx->pc) {
        case 0x2e7e5cu: goto label_2e7e5c;
        default: break;
    }

    ctx->pc = 0x2e7e3cu;

    // 0x2e7e3c: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x2e7e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7e40: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x2e7e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
    // 0x2e7e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7e48: 0x0  nop
    ctx->pc = 0x2e7e48u;
    // NOP
    // 0x2e7e4c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e7e4cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e7e50: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7e54: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x2E7E54u;
    SET_GPR_U32(ctx, 31, 0x2E7E5Cu);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x2E7E54u, 0x2E7E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E5Cu;
label_2e7e5c:
    // 0x2e7e5c: 0x860300e8  lh          $v1, 0xE8($s0)
    ctx->pc = 0x2e7e5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x2e7e60: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x2E7E60u;
    {
        const bool branch_taken_0x2e7e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7e60) {
            ctx->pc = 0x2E7FB4u;
            return;
        }
    }
    ctx->pc = 0x2E7E68u;
    // 0x2e7e68: 0x860300e8  lh          $v1, 0xE8($s0)
    ctx->pc = 0x2e7e68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x2e7e6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e7e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e7e70: 0xa60300e8  sh          $v1, 0xE8($s0)
    ctx->pc = 0x2e7e70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e7e74: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7e78: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e7e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e7e7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e7e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7e80: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e7e80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e7e84: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e7e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e7e88: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e7e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e7e8c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e7e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7e90: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e7e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e7e94: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e7e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e7e98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e7e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7e9c: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x2e7e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7ea0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e7ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e7ea4: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x2e7ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x2e7ea8: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7eac: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e7eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e7eb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e7eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7eb4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e7eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e7eb8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e7eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e7ebc: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e7ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e7ec0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e7ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7ec4: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e7ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e7ec8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e7ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e7ecc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e7eccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7ed0: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x2e7ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7ed4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e7ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e7ed8: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x2e7ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x2e7edc: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7ee0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e7ee4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e7ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7ee8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e7ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e7eec: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e7eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e7ef0: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e7ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e7ef4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e7ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7ef8: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e7ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e7efc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e7efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e7f00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e7f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7f04: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x2e7f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7f08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e7f08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e7f0c: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x2e7f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x2e7f10: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7f14: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e7f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e7f18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e7f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7f1c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e7f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e7f20: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e7f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e7f24: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e7f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e7f28: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e7f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7f2c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e7f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e7f30: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e7f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e7f34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e7f34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7f38: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x2e7f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7f3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e7f3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e7f40: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x2e7f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x2e7f44: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7f48: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e7f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e7f4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e7f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7f50: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e7f50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e7f54: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e7f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e7f58: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e7f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e7f5c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e7f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7f60: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e7f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e7f64: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e7f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e7f68: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e7f68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7f6c: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x2e7f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7f70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e7f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e7f74: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x2e7f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x2e7f78: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7f7c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e7f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e7f80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e7f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7f84: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e7f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e7f88: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e7f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e7f8c: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e7f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e7f90: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e7f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7f94: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e7f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e7f98: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e7f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e7f9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e7f9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7fa0: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x2e7fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7fa4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e7fa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e7fa8: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x2e7fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x2e7fac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7FACu;
    {
        const bool branch_taken_0x2e7fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7fac) {
            ctx->pc = 0x2E7FB8u;
            return;
        }
    }
    ctx->pc = 0x2E7FB4u;
}
