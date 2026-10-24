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

// Function: entry_002e7798
// Address: 0x2e7798 - 0x2e785c
void entry_002e7798_0x2e7798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7798_0x2e7798");
#endif

    ctx->pc = 0x2e7798u;

    // 0x2e7798: 0xc6410128  lwc1        $f1, 0x128($s2)
    ctx->pc = 0x2e7798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e779c: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x2e779cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x2e77a0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2e77a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2e77a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e77a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e77a8: 0x0  nop
    ctx->pc = 0x2e77a8u;
    // NOP
    // 0x2e77ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e77acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e77b0: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x2e77b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    // 0x2e77b4: 0xc6410128  lwc1        $f1, 0x128($s2)
    ctx->pc = 0x2e77b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e77b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e77b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e77bc: 0x0  nop
    ctx->pc = 0x2e77bcu;
    // NOP
    // 0x2e77c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e77c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e77c4: 0x0  nop
    ctx->pc = 0x2e77c4u;
    // NOP
    // 0x2e77c8: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x2E77C8u;
    {
        const bool branch_taken_0x2e77c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e77c8) {
            ctx->pc = 0x2E785Cu;
            return;
        }
    }
    ctx->pc = 0x2E77D0u;
    // 0x2e77d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e77d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e77d4: 0x0  nop
    ctx->pc = 0x2e77d4u;
    // NOP
    // 0x2e77d8: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x2e77d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    // 0x2e77dc: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e77dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e77e0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2e77e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e77e4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e77e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e77e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e77e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e77ec: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2e77ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2e77f0: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e77f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e77f4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2e77f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e77f8: 0x34640004  ori         $a0, $v1, 0x4
    ctx->pc = 0x2e77f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2e77fc: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x2e77fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x2e7800: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e7800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7804: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e7804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7808: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2e7808u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e780c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e780cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e7810: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e7810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7814: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e7814u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e7818: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e7818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e781c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2e781cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7820: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e7820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7824: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x2e7824u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7828: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e7828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e782c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e782cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e7830: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x2e7830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7834: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2e7834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2e7838: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x2e7838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x2e783c: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x2e783cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e7840: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x2e7840u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x2e7844: 0x8e8300ac  lw          $v1, 0xAC($s4)
    ctx->pc = 0x2e7844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
    // 0x2e7848: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7848u;
    {
        const bool branch_taken_0x2e7848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7848) {
            ctx->pc = 0x2E785Cu;
            return;
        }
    }
    ctx->pc = 0x2E7850u;
    // 0x2e7850: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e7850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e7854: 0x8e8300ac  lw          $v1, 0xAC($s4)
    ctx->pc = 0x2e7854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
    // 0x2e7858: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x2e7858u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2e785cu;
}
