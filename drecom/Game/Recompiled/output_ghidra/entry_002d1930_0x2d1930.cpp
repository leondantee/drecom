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

// Function: entry_002d1930
// Address: 0x2d1930 - 0x2d19e0
void entry_002d1930_0x2d1930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d1930_0x2d1930");
#endif

    switch (ctx->pc) {
        case 0x2d1984u: goto label_2d1984;
        default: break;
    }

    ctx->pc = 0x2d1930u;

    // 0x2d1930: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1934: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2d1934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1938: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x2d1938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x2d193c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d193cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1940: 0x0  nop
    ctx->pc = 0x2d1940u;
    // NOP
    // 0x2d1944: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d1944u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1948: 0x0  nop
    ctx->pc = 0x2d1948u;
    // NOP
    // 0x2d194c: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
    ctx->pc = 0x2D194Cu;
    {
        const bool branch_taken_0x2d194c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d194c) {
            ctx->pc = 0x2D1A80u;
            return;
        }
    }
    ctx->pc = 0x2D1954u;
    // 0x2d1954: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2d1954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x2d1958: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d1958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d195c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d195cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1960: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1964: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x2d1964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d1968: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d196c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x2d196cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2d1970: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d1970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1974: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d1974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d1978: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d1978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d197c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D197Cu;
    SET_GPR_U32(ctx, 31, 0x2D1984u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D197Cu, 0x2D1984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1984u;
label_2d1984:
    // 0x2d1984: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D1984u;
    {
        const bool branch_taken_0x2d1984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1984) {
            ctx->pc = 0x2D1A80u;
            return;
        }
    }
    ctx->pc = 0x2D198Cu;
    // 0x2d198c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d198cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d1990: 0x8423ec66  lh          $v1, -0x139A($at)
    ctx->pc = 0x2d1990u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x2d1994: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2d1994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d1998: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d1998u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d199c: 0x286100c9  slti        $at, $v1, 0xC9
    ctx->pc = 0x2d199cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x2d19a0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2D19A0u;
    {
        const bool branch_taken_0x2d19a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d19a0) {
            ctx->pc = 0x2D19E0u;
            return;
        }
    }
    ctx->pc = 0x2D19A8u;
    // 0x2d19a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d19a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d19ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d19acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d19b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d19b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d19b4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2d19b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d19b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d19b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d19bc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d19bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d19c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d19c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d19c4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d19c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d19c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d19c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d19cc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d19ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d19d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d19d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d19d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d19d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d19d8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2D19D8u;
    {
        const bool branch_taken_0x2d19d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d19d8) {
            ctx->pc = 0x2D1A80u;
            return;
        }
    }
    ctx->pc = 0x2D19E0u;
}
