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

// Function: caseD_5
// Address: 0x31c734 - 0x31c7f4
void caseD_5_0x31c734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x31c734");
#endif

    switch (ctx->pc) {
        case 0x31c740u: goto label_31c740;
        default: break;
    }

    ctx->pc = 0x31c734u;

    // 0x31c734: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c738: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x31C738u;
    SET_GPR_U32(ctx, 31, 0x31C740u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x31C738u, 0x31C740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C740u;
label_31c740:
    // 0x31c740: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c744: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x31c744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c748: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31c748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x31c74c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c74cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c750: 0x0  nop
    ctx->pc = 0x31c750u;
    // NOP
    // 0x31c754: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31c754u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31c758: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x31c758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x31c75c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c760: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x31c760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c764: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c768: 0xc46012cc  lwc1        $f0, 0x12CC($v1)
    ctx->pc = 0x31c768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c76c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31c76cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31c770: 0x0  nop
    ctx->pc = 0x31c770u;
    // NOP
    // 0x31c774: 0x45000042  bc1f        . + 4 + (0x42 << 2)
    ctx->pc = 0x31C774u;
    {
        const bool branch_taken_0x31c774 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31c774) {
            ctx->pc = 0x31C880u;
            return;
        }
    }
    ctx->pc = 0x31C77Cu;
    // 0x31c77c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c780: 0x8c43128c  lw          $v1, 0x128C($v0)
    ctx->pc = 0x31c780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x31c784: 0x2c61000f  sltiu       $at, $v1, 0xF
    ctx->pc = 0x31c784u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x31c788: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x31C788u;
    {
        const bool branch_taken_0x31c788 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c788) {
            ctx->pc = 0x31C7F4u;
            return;
        }
    }
    ctx->pc = 0x31C790u;
    // 0x31c790: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c794: 0xc44012cc  lwc1        $f0, 0x12CC($v0)
    ctx->pc = 0x31c794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c798: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c79c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x31c79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x31c7a0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c7a4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x31c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x31c7a8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x31c7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x31c7ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31c7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31c7b0: 0xc46012d0  lwc1        $f0, 0x12D0($v1)
    ctx->pc = 0x31c7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c7b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31c7b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31c7b8: 0xe46012d0  swc1        $f0, 0x12D0($v1)
    ctx->pc = 0x31c7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4816), bits); }
    // 0x31c7bc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c7c0: 0xc48012d0  lwc1        $f0, 0x12D0($a0)
    ctx->pc = 0x31c7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c7c4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c7c8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x31c7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x31c7cc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c7d0: 0x8c62128c  lw          $v0, 0x128C($v1)
    ctx->pc = 0x31c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x31c7d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31c7d8: 0xac62128c  sw          $v0, 0x128C($v1)
    ctx->pc = 0x31c7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 2));
    // 0x31c7dc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c7e0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x31c7e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x31c7e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31c7e8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x31c7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x31c7ec: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x31C7ECu;
    {
        const bool branch_taken_0x31c7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c7ec) {
            ctx->pc = 0x31C880u;
            return;
        }
    }
    ctx->pc = 0x31C7F4u;
}
