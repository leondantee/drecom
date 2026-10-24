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

// Function: entry_002a1868
// Address: 0x2a1868 - 0x2a1904
void entry_002a1868_0x2a1868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a1868_0x2a1868");
#endif

    switch (ctx->pc) {
        case 0x2a18c0u: goto label_2a18c0;
        default: break;
    }

    ctx->pc = 0x2a1868u;

    // 0x2a1868: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a186c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2a186cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1870: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x2a1870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1874: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a1874u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a1878: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2a1878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a187c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a187cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1880: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2a1880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1884: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x2a1884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1888: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a1888u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a188c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a188cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a1890: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1894: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2a1894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1898: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x2a1898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a189c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a189cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a18a0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2a18a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a18a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a18a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a18a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a18a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a18ac: 0x0  nop
    ctx->pc = 0x2a18acu;
    // NOP
    // 0x2a18b0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2a18b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2a18b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a18b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a18b8: 0xc067588  jal         func_19D620
    ctx->pc = 0x2A18B8u;
    SET_GPR_U32(ctx, 31, 0x2A18C0u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x2A18B8u, 0x2A18C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A18C0u;
label_2a18c0:
    // 0x2a18c0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2a18c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2a18c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a18c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a18c8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2a18c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2a18cc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2a18ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a18d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a18d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a18d4: 0x1083009c  beq         $a0, $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x2A18D4u;
    {
        const bool branch_taken_0x2a18d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a18d4) {
            ctx->pc = 0x2A1B48u;
            return;
        }
    }
    ctx->pc = 0x2A18DCu;
    // 0x2a18dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a18dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a18e0: 0x10830089  beq         $a0, $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x2A18E0u;
    {
        const bool branch_taken_0x2a18e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a18e0) {
            ctx->pc = 0x2A1B08u;
            return;
        }
    }
    ctx->pc = 0x2A18E8u;
    // 0x2a18e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a18e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a18ec: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A18ECu;
    {
        const bool branch_taken_0x2a18ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a18ec) {
            ctx->pc = 0x2A1938u;
            return;
        }
    }
    ctx->pc = 0x2A18F4u;
    // 0x2a18f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A18F4u;
    {
        const bool branch_taken_0x2a18f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a18f4) {
            ctx->pc = 0x2A1904u;
            return;
        }
    }
    ctx->pc = 0x2A18FCu;
    // 0x2a18fc: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x2A18FCu;
    {
        const bool branch_taken_0x2a18fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a18fc) {
            ctx->pc = 0x2A1D84u;
            return;
        }
    }
    ctx->pc = 0x2A1904u;
}
