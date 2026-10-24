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

// Function: entry_001d1244
// Address: 0x1d1244 - 0x1d12c0
void entry_001d1244_0x1d1244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1244_0x1d1244");
#endif

    switch (ctx->pc) {
        case 0x1d1260u: goto label_1d1260;
        case 0x1d126cu: goto label_1d126c;
        default: break;
    }

    ctx->pc = 0x1d1244u;

    // 0x1d1244: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d1244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1248: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d1248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d124c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d1250: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x1d1250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1d1254: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1d1254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1d1258: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1D1258u;
    SET_GPR_U32(ctx, 31, 0x1D1260u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1D1258u, 0x1D1260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1260u;
label_1d1260:
    // 0x1d1260: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d1260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d1264: 0xc067588  jal         func_19D620
    ctx->pc = 0x1D1264u;
    SET_GPR_U32(ctx, 31, 0x1D126Cu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1D1264u, 0x1D126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D126Cu;
label_1d126c:
    // 0x1d126c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1d126cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1d1270: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1d1270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d1274: 0x3c03476a  lui         $v1, 0x476A
    ctx->pc = 0x1d1274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18282 << 16));
    // 0x1d1278: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x1d1278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x1d127c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d127cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1280: 0x0  nop
    ctx->pc = 0x1d1280u;
    // NOP
    // 0x1d1284: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d1284u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1288: 0x0  nop
    ctx->pc = 0x1d1288u;
    // NOP
    // 0x1d128c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x1D128Cu;
    {
        const bool branch_taken_0x1d128c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d128c) {
            ctx->pc = 0x1D12C8u;
            return;
        }
    }
    ctx->pc = 0x1D1294u;
    // 0x1d1294: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d1294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1298: 0xa0800060  sb          $zero, 0x60($a0)
    ctx->pc = 0x1d1298u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d129c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D129Cu;
    {
        const bool branch_taken_0x1d129c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d129c) {
            ctx->pc = 0x1D12C0u;
            return;
        }
    }
    ctx->pc = 0x1D12A4u;
    // 0x1d12a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d12a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d12a8: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x1d12a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x1d12ac: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1d12acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x1d12b0: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1d12b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x1d12b4: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x1d12b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x1d12b8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d12b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d12bc: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x1d12bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
    ctx->pc = 0x1d12c0u;
}
