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

// Function: caseD_2
// Address: 0x353fec - 0x354098
void caseD_2_0x353fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x353fec");
#endif

    ctx->pc = 0x353fecu;

    // 0x353fec: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x353fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x353ff0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x353ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353ff4: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x353ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353ff8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353ff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x353ffc: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x353ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x354000: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x354000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354004: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x354004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x354008: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x354008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35400c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35400cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x354010: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x354010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x354014: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354018: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x354018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35401c: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x35401cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354020: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x354020u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x354024: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x354024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x354028: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x354028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35402c: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x35402cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x354030: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354034: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x354034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354038: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x354038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35403c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x35403cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x354040: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x354040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354044: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x354044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x354048: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x354048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x35404c: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x35404cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x354050: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x354050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354054: 0x0  nop
    ctx->pc = 0x354054u;
    // NOP
    // 0x354058: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x354058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x35405c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x35405cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x354060: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354064: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x354064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x354068: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x354068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35406c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x35406cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x354070: 0x0  nop
    ctx->pc = 0x354070u;
    // NOP
    // 0x354074: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x354074u;
    {
        const bool branch_taken_0x354074 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x354074) {
            ctx->pc = 0x354098u;
            return;
        }
    }
    ctx->pc = 0x35407Cu;
    // 0x35407c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x35407cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x354080: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x354080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354084: 0xa4a30014  sh          $v1, 0x14($a1)
    ctx->pc = 0x354084u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x354088: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x354088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35408c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x35408cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354090: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x354090u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x354094: 0x0  nop
    ctx->pc = 0x354094u;
    // NOP
    ctx->pc = 0x354098u;
}
