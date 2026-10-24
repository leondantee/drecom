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

// Function: entry_002e1910
// Address: 0x2e1910 - 0x2e19fc
void entry_002e1910_0x2e1910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1910_0x2e1910");
#endif

    ctx->pc = 0x2e1910u;

    // 0x2e1910: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x2e1910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1914: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x2e1914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x2e1918: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2e1918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2e191c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e191cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1920: 0x0  nop
    ctx->pc = 0x2e1920u;
    // NOP
    // 0x2e1924: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e1924u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e1928: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2e1928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2e192c: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x2e192cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1930: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1934: 0x0  nop
    ctx->pc = 0x2e1934u;
    // NOP
    // 0x2e1938: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e1938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e193c: 0x0  nop
    ctx->pc = 0x2e193cu;
    // NOP
    // 0x2e1940: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x2E1940u;
    {
        const bool branch_taken_0x2e1940 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1940) {
            ctx->pc = 0x2E19FCu;
            return;
        }
    }
    ctx->pc = 0x2E1948u;
    // 0x2e1948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e194c: 0x0  nop
    ctx->pc = 0x2e194cu;
    // NOP
    // 0x2e1950: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2e1950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2e1954: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e1954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1958: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2e1958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e195c: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2e195cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2e1960: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e1960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e1964: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2e1964u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2e1968: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e1968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e196c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2e196cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e1970: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e1970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e1974: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e1974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e1978: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2e1978u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2e197c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e197cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1980: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e1980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e1984: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2e1984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2e1988: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2e1988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2e198c: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x2e198cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2e1990: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x2e1990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x2e1994: 0xa6230140  sh          $v1, 0x140($s1)
    ctx->pc = 0x2e1994u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e1998: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2e1998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2e199c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e199cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e19a0: 0x0  nop
    ctx->pc = 0x2e19a0u;
    // NOP
    // 0x2e19a4: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2e19a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2e19a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e19a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e19ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e19acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e19b0: 0x0  nop
    ctx->pc = 0x2e19b0u;
    // NOP
    // 0x2e19b4: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x2e19b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x2e19b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e19b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e19bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e19bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e19c0: 0x0  nop
    ctx->pc = 0x2e19c0u;
    // NOP
    // 0x2e19c4: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x2e19c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x2e19c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e19c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e19cc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e19ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e19d0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e19d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e19d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e19d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e19d8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e19d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e19dc: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x2e19dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e19e0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e19e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e19e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e19e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e19e8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e19e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e19ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e19ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e19f0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e19f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e19f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e19f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e19f8: 0xae4000b0  sw          $zero, 0xB0($s2)
    ctx->pc = 0x2e19f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
    ctx->pc = 0x2e19fcu;
}
