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

// Function: entry_002f1b10
// Address: 0x2f1b10 - 0x2f1d68
void entry_002f1b10_0x2f1b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f1b10_0x2f1b10");
#endif

    switch (ctx->pc) {
        case 0x2f1b84u: goto label_2f1b84;
        case 0x2f1ba8u: goto label_2f1ba8;
        case 0x2f1bccu: goto label_2f1bcc;
        case 0x2f1be0u: goto label_2f1be0;
        case 0x2f1c1cu: goto label_2f1c1c;
        case 0x2f1c4cu: goto label_2f1c4c;
        case 0x2f1d30u: goto label_2f1d30;
        case 0x2f1d50u: goto label_2f1d50;
        default: break;
    }

    ctx->pc = 0x2f1b10u;

    // 0x2f1b10: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f1b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2f1b14: 0x2475a610  addiu       $s5, $v1, -0x59F0
    ctx->pc = 0x2f1b14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2f1b18: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x2f1b18u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f1b1c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f1b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f1b20: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f1b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f1b24: 0x12030090  beq         $s0, $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x2F1B24u;
    {
        const bool branch_taken_0x2f1b24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f1b24) {
            ctx->pc = 0x2F1D68u;
            return;
        }
    }
    ctx->pc = 0x2F1B2Cu;
    // 0x2f1b2c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2f1b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2f1b30: 0xa202011c  sb          $v0, 0x11C($s0)
    ctx->pc = 0x2f1b30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f1b34: 0x3c02417c  lui         $v0, 0x417C
    ctx->pc = 0x2f1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16764 << 16));
    // 0x2f1b38: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f1b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f1b3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1b40: 0x0  nop
    ctx->pc = 0x2f1b40u;
    // NOP
    // 0x2f1b44: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f1b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f1b48: 0x3c02417c  lui         $v0, 0x417C
    ctx->pc = 0x2f1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16764 << 16));
    // 0x2f1b4c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f1b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f1b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1b54: 0x0  nop
    ctx->pc = 0x2f1b54u;
    // NOP
    // 0x2f1b58: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f1b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f1b5c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2f1b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2f1b60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1b64: 0x0  nop
    ctx->pc = 0x2f1b64u;
    // NOP
    // 0x2f1b68: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f1b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f1b6c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f1b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f1b70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1b74: 0x0  nop
    ctx->pc = 0x2f1b74u;
    // NOP
    // 0x2f1b78: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f1b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f1b7c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1B7Cu;
    SET_GPR_U32(ctx, 31, 0x2F1B84u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1B7Cu, 0x2F1B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1B84u;
label_2f1b84:
    // 0x2f1b84: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2f1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x2f1b88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1b8c: 0x0  nop
    ctx->pc = 0x2f1b8cu;
    // NOP
    // 0x2f1b90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f1b90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1b94: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2f1b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1b98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f1b98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f1b9c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f1b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f1ba0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1BA0u;
    SET_GPR_U32(ctx, 31, 0x2F1BA8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1BA0u, 0x2F1BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BA8u;
label_2f1ba8:
    // 0x2f1ba8: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2f1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x2f1bac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1bb0: 0x0  nop
    ctx->pc = 0x2f1bb0u;
    // NOP
    // 0x2f1bb4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f1bb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1bb8: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2f1bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1bbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f1bbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f1bc0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f1bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f1bc4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1BC4u;
    SET_GPR_U32(ctx, 31, 0x2F1BCCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1BC4u, 0x2F1BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BCCu;
label_2f1bcc:
    // 0x2f1bcc: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x2f1bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f1bd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f1bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f1bd4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f1bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f1bd8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1BD8u;
    SET_GPR_U32(ctx, 31, 0x2F1BE0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1BD8u, 0x2F1BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BE0u;
label_2f1be0:
    // 0x2f1be0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f1be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f1be4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1be8: 0x0  nop
    ctx->pc = 0x2f1be8u;
    // NOP
    // 0x2f1bec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f1becu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1bf0: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f1bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1bf4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f1bf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f1bf8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f1bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f1bfc: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2f1bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2f1c00: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f1c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f1c04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1c08: 0x0  nop
    ctx->pc = 0x2f1c08u;
    // NOP
    // 0x2f1c0c: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2f1c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2f1c10: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2f1c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f1c14: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2F1C14u;
    SET_GPR_U32(ctx, 31, 0x2F1C1Cu);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2F1C14u, 0x2F1C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1C1Cu;
label_2f1c1c:
    // 0x2f1c1c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f1c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f1c20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1c24: 0x0  nop
    ctx->pc = 0x2f1c24u;
    // NOP
    // 0x2f1c28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f1c28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1c2c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2f1c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2f1c30: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f1c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f1c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1c38: 0x0  nop
    ctx->pc = 0x2f1c38u;
    // NOP
    // 0x2f1c3c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2f1c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2f1c40: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2f1c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f1c44: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2F1C44u;
    SET_GPR_U32(ctx, 31, 0x2F1C4Cu);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2F1C44u, 0x2F1C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1C4Cu;
label_2f1c4c:
    // 0x2f1c4c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f1c50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1c54: 0x0  nop
    ctx->pc = 0x2f1c54u;
    // NOP
    // 0x2f1c58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f1c58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1c5c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2f1c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2f1c60: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x2f1c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
    // 0x2f1c64: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x2f1c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
    // 0x2f1c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1c6c: 0x0  nop
    ctx->pc = 0x2f1c6cu;
    // NOP
    // 0x2f1c70: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2f1c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2f1c74: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2f1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2f1c78: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2f1c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2f1c7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1c80: 0x0  nop
    ctx->pc = 0x2f1c80u;
    // NOP
    // 0x2f1c84: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2f1c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2f1c88: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x2f1c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
    // 0x2f1c8c: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x2f1c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
    // 0x2f1c90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1c94: 0x0  nop
    ctx->pc = 0x2f1c94u;
    // NOP
    // 0x2f1c98: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2f1c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2f1c9c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f1c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f1ca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1ca4: 0x0  nop
    ctx->pc = 0x2f1ca4u;
    // NOP
    // 0x2f1ca8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2f1ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2f1cac: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2f1cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2f1cb0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f1cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f1cb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1cb8: 0x0  nop
    ctx->pc = 0x2f1cb8u;
    // NOP
    // 0x2f1cbc: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2f1cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2f1cc0: 0x3c023f61  lui         $v0, 0x3F61
    ctx->pc = 0x2f1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16225 << 16));
    // 0x2f1cc4: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x2f1cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
    // 0x2f1cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1ccc: 0x0  nop
    ctx->pc = 0x2f1cccu;
    // NOP
    // 0x2f1cd0: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2f1cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2f1cd4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f1cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f1cd8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f1cdc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f1cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f1ce0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f1ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f1ce4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f1ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f1ce8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f1ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f1cec: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f1cecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f1cf0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f1cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f1cf4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f1cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f1cf8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f1cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f1cfc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f1cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f1d00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f1d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f1d04: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f1d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f1d08: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f1d0c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f1d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f1d10: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f1d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f1d14: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f1d14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f1d18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f1d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f1d1c: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2f1d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2f1d20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f1d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f1d24: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2f1d24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f1d28: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1D28u;
    SET_GPR_U32(ctx, 31, 0x2F1D30u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1D28u, 0x2F1D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1D30u;
label_2f1d30:
    // 0x2f1d30: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2f1d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2f1d34: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f1d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f1d38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1d3c: 0x0  nop
    ctx->pc = 0x2f1d3cu;
    // NOP
    // 0x2f1d40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f1d40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1d44: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2f1d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2f1d48: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1D48u;
    SET_GPR_U32(ctx, 31, 0x2F1D50u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1D48u, 0x2F1D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1D50u;
label_2f1d50:
    // 0x2f1d50: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2f1d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2f1d54: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2f1d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2f1d58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f1d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1d5c: 0x0  nop
    ctx->pc = 0x2f1d5cu;
    // NOP
    // 0x2f1d60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f1d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1d64: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2f1d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x2f1d68u;
}
