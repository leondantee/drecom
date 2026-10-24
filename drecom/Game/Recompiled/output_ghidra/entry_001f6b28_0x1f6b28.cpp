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

// Function: entry_001f6b28
// Address: 0x1f6b28 - 0x1f6c28
void entry_001f6b28_0x1f6b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6b28_0x1f6b28");
#endif

    switch (ctx->pc) {
        case 0x1f6b9cu: goto label_1f6b9c;
        default: break;
    }

    ctx->pc = 0x1f6b28u;

    // 0x1f6b28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6b2c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1f6b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6b30: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f6b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f6b34: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x1f6b34u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6b38: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f6b38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f6b3c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1f6b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1f6b40: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1f6b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1f6b44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6b48: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f6b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f6b4c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f6b4cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6b50: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f6b50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f6b54: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6b58: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1f6b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6b5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f6b5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f6b60: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1f6b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1f6b64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6b68: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x1f6b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6b6c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f6b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f6b70: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x1f6b70u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6b74: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f6b74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f6b78: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1f6b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1f6b7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f6b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f6b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6b84: 0x0  nop
    ctx->pc = 0x1f6b84u;
    // NOP
    // 0x1f6b88: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1f6b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1f6b8c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1f6b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f6b90: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1f6b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f6b94: 0xc040c24  jal         func_103090
    ctx->pc = 0x1F6B94u;
    SET_GPR_U32(ctx, 31, 0x1F6B9Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1F6B9Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F6B9Cu) { return; }
    ctx->pc = 0x1F6B9Cu;
label_1f6b9c:
    // 0x1f6b9c: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1f6b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1f6ba0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6ba4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1f6ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6ba8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f6ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f6bac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6bb0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6bb4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f6bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1f6bb8: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1f6bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1f6bbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6bc0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1f6bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6bc4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f6bc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f6bc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6bcc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6bd0: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x1f6bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x1f6bd4: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1f6bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1f6bd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6bdc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1f6bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6be0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f6be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f6be4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6be8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6bec: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x1f6becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x1f6bf0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6bf4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6bf8: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1f6bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f6bfc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1f6bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1f6c00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f6c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f6c04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6C04u;
    {
        const bool branch_taken_0x1f6c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6c04) {
            ctx->pc = 0x1F6C28u;
            return;
        }
    }
    ctx->pc = 0x1F6C0Cu;
    // 0x1f6c0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f6c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f6c10: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f6c10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f6c14: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f6c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f6c18: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1f6c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1f6c1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f6c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f6c20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f6c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f6c24: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x1f6c24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    ctx->pc = 0x1f6c28u;
}
