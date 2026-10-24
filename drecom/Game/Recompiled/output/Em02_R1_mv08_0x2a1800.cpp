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

// Function: Em02_R1_mv08
// Address: 0x2a1800 - 0x2a1d9c
void Em02_R1_mv08_0x2a1800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_mv08_0x2a1800");
#endif

    switch (ctx->pc) {
        case 0x2a18c0u: goto label_2a18c0;
        case 0x2a1930u: goto label_2a1930;
        case 0x2a1960u: goto label_2a1960;
        case 0x2a197cu: goto label_2a197c;
        case 0x2a198cu: goto label_2a198c;
        case 0x2a19c4u: goto label_2a19c4;
        case 0x2a19e0u: goto label_2a19e0;
        case 0x2a19f4u: goto label_2a19f4;
        case 0x2a1a0cu: goto label_2a1a0c;
        case 0x2a1a58u: goto label_2a1a58;
        case 0x2a1a70u: goto label_2a1a70;
        case 0x2a1a7cu: goto label_2a1a7c;
        case 0x2a1a8cu: goto label_2a1a8c;
        case 0x2a1a98u: goto label_2a1a98;
        case 0x2a1aa4u: goto label_2a1aa4;
        case 0x2a1aecu: goto label_2a1aec;
        case 0x2a1b34u: goto label_2a1b34;
        case 0x2a1b8cu: goto label_2a1b8c;
        case 0x2a1ba8u: goto label_2a1ba8;
        case 0x2a1bc0u: goto label_2a1bc0;
        case 0x2a1bccu: goto label_2a1bcc;
        case 0x2a1bdcu: goto label_2a1bdc;
        case 0x2a1be8u: goto label_2a1be8;
        case 0x2a1bf4u: goto label_2a1bf4;
        case 0x2a1c98u: goto label_2a1c98;
        case 0x2a1d08u: goto label_2a1d08;
        case 0x2a1d3cu: goto label_2a1d3c;
        case 0x2a1d84u: goto label_2a1d84;
        default: break;
    }

    ctx->pc = 0x2a1800u;

    // 0x2a1800: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a1800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a1804: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2a1804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2a1808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a1808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a180c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a180cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a1810: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2a1810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x2a1814: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1818: 0x8c7102d0  lw          $s1, 0x2D0($v1)
    ctx->pc = 0x2a1818u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2a181c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a181cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1820: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a1820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a1824: 0x8c70004c  lw          $s0, 0x4C($v1)
    ctx->pc = 0x2a1824u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2a1828: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A1828u;
    {
        const bool branch_taken_0x2a1828 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1828) {
            ctx->pc = 0x2A1868u;
            goto label_2a1868;
        }
    }
    ctx->pc = 0x2A1830u;
    // 0x2a1830: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a1830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1834: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1838: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a1838u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a183c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a183cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1840: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1844: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2a1844u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a1848: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a184c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a184cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a1850: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1854: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2a1854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a1858: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a185c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a185cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2a1860: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x2A1860u;
    {
        const bool branch_taken_0x2a1860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1860) {
            ctx->pc = 0x2A1D84u;
            goto label_2a1d84;
        }
    }
    ctx->pc = 0x2A1868u;
label_2a1868:
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
            goto label_2a1b48;
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
            goto label_2a1b08;
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
            goto label_2a1938;
        }
    }
    ctx->pc = 0x2A18F4u;
    // 0x2a18f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A18F4u;
    {
        const bool branch_taken_0x2a18f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a18f4) {
            ctx->pc = 0x2A1904u;
            goto label_2a1904;
        }
    }
    ctx->pc = 0x2A18FCu;
    // 0x2a18fc: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x2A18FCu;
    {
        const bool branch_taken_0x2a18fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a18fc) {
            ctx->pc = 0x2A1D84u;
            goto label_2a1d84;
        }
    }
    ctx->pc = 0x2A1904u;
label_2a1904:
    // 0x2a1904: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1908: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a190c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a190cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a1910: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1914: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1918: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a1918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a191c: 0x24060803  addiu       $a2, $zero, 0x803
    ctx->pc = 0x2a191cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
    // 0x2a1920: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a1920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1924: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a1924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a1928: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A1928u;
    SET_GPR_U32(ctx, 31, 0x2A1930u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A1928u, 0x2A1930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1930u;
label_2a1930:
    // 0x2a1930: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1934: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2a1934u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_2a1938:
    // 0x2a1938: 0x3c023d8e  lui         $v0, 0x3D8E
    ctx->pc = 0x2a1938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15758 << 16));
    // 0x2a193c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a193cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a1940: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a1940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1944: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1948: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a194c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2a194cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a1950: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2a1950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1954: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2a1954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2a1958: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A1958u;
    SET_GPR_U32(ctx, 31, 0x2A1960u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A1958u, 0x2A1960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1960u;
label_2a1960:
    // 0x2a1960: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2a1960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2a1964: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1968: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a1968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a196c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2a196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1970: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a1970u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a1974: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A1974u;
    SET_GPR_U32(ctx, 31, 0x2A197Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A1974u, 0x2A197Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A197Cu;
label_2a197c:
    // 0x2a197c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a197cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1980: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a1980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a1984: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A1984u;
    SET_GPR_U32(ctx, 31, 0x2A198Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A1984u, 0x2A198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A198Cu;
label_2a198c:
    // 0x2a198c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a198cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a1990: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2a1990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2a1994: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A1994u;
    {
        const bool branch_taken_0x2a1994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1994) {
            ctx->pc = 0x2A19E8u;
            goto label_2a19e8;
        }
    }
    ctx->pc = 0x2A199Cu;
    // 0x2a199c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a199cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a19a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a19a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a19a4: 0x3c023d8e  lui         $v0, 0x3D8E
    ctx->pc = 0x2a19a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15758 << 16));
    // 0x2a19a8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a19a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a19ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a19acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a19b0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a19b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a19b4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a19b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a19b8: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2a19b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2a19bc: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A19BCu;
    SET_GPR_U32(ctx, 31, 0x2A19C4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A19BCu, 0x2A19C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A19C4u;
label_2a19c4:
    // 0x2a19c4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2a19c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2a19c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a19cc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a19ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a19d0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2a19d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a19d4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a19d4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a19d8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A19D8u;
    SET_GPR_U32(ctx, 31, 0x2A19E0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A19D8u, 0x2A19E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A19E0u;
label_2a19e0:
    // 0x2a19e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a19e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a19e4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a19e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2a19e8:
    // 0x2a19e8: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x2a19e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a19ec: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2A19ECu;
    SET_GPR_U32(ctx, 31, 0x2A19F4u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2A19ECu, 0x2A19F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A19F4u;
label_2a19f4:
    // 0x2a19f4: 0x3c03407f  lui         $v1, 0x407F
    ctx->pc = 0x2a19f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16511 << 16));
    // 0x2a19f8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2a19f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2a19fc: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2a19fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a1a00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a1a00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a1a04: 0xc040048  jal         func_100120
    ctx->pc = 0x2A1A04u;
    SET_GPR_U32(ctx, 31, 0x2A1A0Cu);
    ctx->pc = 0x100120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100120u, 0x2A1A04u, 0x2A1A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A0Cu;
label_2a1a0c:
    // 0x2a1a0c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A1A0Cu;
    {
        const bool branch_taken_0x2a1a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1a0c) {
            ctx->pc = 0x2A1A60u;
            goto label_2a1a60;
        }
    }
    ctx->pc = 0x2A1A14u;
    // 0x2a1a14: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1a18: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2a1a18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2a1a1c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2a1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a1a20: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x2a1a20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a1a24: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2a1a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2a1a28: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a1a28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a1a2c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2a1a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2a1a30: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A1A30u;
    {
        const bool branch_taken_0x2a1a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a1a30) {
            ctx->pc = 0x2A1A60u;
            goto label_2a1a60;
        }
    }
    ctx->pc = 0x2A1A38u;
    // 0x2a1a38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1a3c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1a40: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a1a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a1a44: 0x24060801  addiu       $a2, $zero, 0x801
    ctx->pc = 0x2a1a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x2a1a48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a1a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1a4c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a1a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a1a50: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A1A50u;
    SET_GPR_U32(ctx, 31, 0x2A1A58u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A1A50u, 0x2A1A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A58u;
label_2a1a58:
    // 0x2a1a58: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1a5c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2a1a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_2a1a60:
    // 0x2a1a60: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1a64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a1a64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a1a68: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A1A68u;
    SET_GPR_U32(ctx, 31, 0x2A1A70u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A1A68u, 0x2A1A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A70u;
label_2a1a70:
    // 0x2a1a70: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1a74: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2A1A74u;
    SET_GPR_U32(ctx, 31, 0x2A1A7Cu);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2A1A74u, 0x2A1A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A7Cu;
label_2a1a7c:
    // 0x2a1a7c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1a80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a1a80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a1a84: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A1A84u;
    SET_GPR_U32(ctx, 31, 0x2A1A8Cu);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A1A84u, 0x2A1A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A8Cu;
label_2a1a8c:
    // 0x2a1a8c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1a90: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A1A90u;
    SET_GPR_U32(ctx, 31, 0x2A1A98u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A1A90u, 0x2A1A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A98u;
label_2a1a98:
    // 0x2a1a98: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1a9c: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A1A9Cu;
    SET_GPR_U32(ctx, 31, 0x2A1AA4u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A1A9Cu, 0x2A1AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1AA4u;
label_2a1aa4:
    // 0x2a1aa4: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x2a1aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1aa8: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2a1aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2a1aac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a1aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1ab0: 0x0  nop
    ctx->pc = 0x2a1ab0u;
    // NOP
    // 0x2a1ab4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a1ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1ab8: 0x0  nop
    ctx->pc = 0x2a1ab8u;
    // NOP
    // 0x2a1abc: 0x450000b1  bc1f        . + 4 + (0xB1 << 2)
    ctx->pc = 0x2A1ABCu;
    {
        const bool branch_taken_0x2a1abc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a1abc) {
            ctx->pc = 0x2A1D84u;
            goto label_2a1d84;
        }
    }
    ctx->pc = 0x2A1AC4u;
    // 0x2a1ac4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1ac8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1acc: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x2a1accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x2a1ad0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2a1ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2a1ad4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a1ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1ad8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a1ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a1adc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a1adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1ae0: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2a1ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2a1ae4: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2A1AE4u;
    SET_GPR_U32(ctx, 31, 0x2A1AECu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2A1AE4u, 0x2A1AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1AECu;
label_2a1aec:
    // 0x2a1aec: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2A1AECu;
    {
        const bool branch_taken_0x2a1aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1aec) {
            ctx->pc = 0x2A1D84u;
            goto label_2a1d84;
        }
    }
    ctx->pc = 0x2A1AF4u;
    // 0x2a1af4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a1af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1af8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1afc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2a1afcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a1b00: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x2A1B00u;
    {
        const bool branch_taken_0x2a1b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1b00) {
            ctx->pc = 0x2A1D84u;
            goto label_2a1d84;
        }
    }
    ctx->pc = 0x2A1B08u;
label_2a1b08:
    // 0x2a1b08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a1b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a1b0c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1b10: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a1b10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a1b14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1b18: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1b1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a1b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a1b20: 0x24060f0f  addiu       $a2, $zero, 0xF0F
    ctx->pc = 0x2a1b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3855));
    // 0x2a1b24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a1b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1b28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a1b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a1b2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A1B2Cu;
    SET_GPR_U32(ctx, 31, 0x2A1B34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A1B2Cu, 0x2A1B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1B34u;
label_2a1b34:
    // 0x2a1b34: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2a1b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2a1b38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1b3c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2a1b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a1b40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1b44: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2a1b44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_2a1b48:
    // 0x2a1b48: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1b4c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2a1b4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2a1b50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a1b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a1b54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a1b54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a1b58: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x2a1b58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a1b5c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A1B5Cu;
    {
        const bool branch_taken_0x2a1b5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1b5c) {
            ctx->pc = 0x2A1BB0u;
            goto label_2a1bb0;
        }
    }
    ctx->pc = 0x2A1B64u;
    // 0x2a1b64: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1b68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1b6c: 0x3c023d8e  lui         $v0, 0x3D8E
    ctx->pc = 0x2a1b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15758 << 16));
    // 0x2a1b70: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a1b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a1b74: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a1b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1b78: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a1b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a1b7c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a1b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1b80: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2a1b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2a1b84: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A1B84u;
    SET_GPR_U32(ctx, 31, 0x2A1B8Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A1B84u, 0x2A1B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1B8Cu;
label_2a1b8c:
    // 0x2a1b8c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2a1b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2a1b90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1b94: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a1b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1b98: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2a1b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1b9c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a1b9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a1ba0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A1BA0u;
    SET_GPR_U32(ctx, 31, 0x2A1BA8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A1BA0u, 0x2A1BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BA8u;
label_2a1ba8:
    // 0x2a1ba8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1bac: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a1bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2a1bb0:
    // 0x2a1bb0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1bb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a1bb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a1bb8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A1BB8u;
    SET_GPR_U32(ctx, 31, 0x2A1BC0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A1BB8u, 0x2A1BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BC0u;
label_2a1bc0:
    // 0x2a1bc0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1bc4: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2A1BC4u;
    SET_GPR_U32(ctx, 31, 0x2A1BCCu);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2A1BC4u, 0x2A1BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BCCu;
label_2a1bcc:
    // 0x2a1bcc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1bd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a1bd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a1bd4: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A1BD4u;
    SET_GPR_U32(ctx, 31, 0x2A1BDCu);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A1BD4u, 0x2A1BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BDCu;
label_2a1bdc:
    // 0x2a1bdc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1be0: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A1BE0u;
    SET_GPR_U32(ctx, 31, 0x2A1BE8u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A1BE0u, 0x2A1BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BE8u;
label_2a1be8:
    // 0x2a1be8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1bec: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A1BECu;
    SET_GPR_U32(ctx, 31, 0x2A1BF4u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A1BECu, 0x2A1BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BF4u;
label_2a1bf4:
    // 0x2a1bf4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1bf8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2a1bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a1bfc: 0x9462004a  lhu         $v0, 0x4A($v1)
    ctx->pc = 0x2a1bfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 74)));
    // 0x2a1c00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a1c04: 0xa462004a  sh          $v0, 0x4A($v1)
    ctx->pc = 0x2a1c04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 74), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a1c08: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1c0c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a1c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a1c10: 0x9442004a  lhu         $v0, 0x4A($v0)
    ctx->pc = 0x2a1c10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 74)));
    // 0x2a1c14: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2a1c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a1c18: 0x28410169  slti        $at, $v0, 0x169
    ctx->pc = 0x2a1c18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)361) ? 1 : 0);
    // 0x2a1c1c: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A1C1Cu;
    {
        const bool branch_taken_0x2a1c1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1c1c) {
            ctx->pc = 0x2A1C70u;
            goto label_2a1c70;
        }
    }
    ctx->pc = 0x2A1C24u;
    // 0x2a1c24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1c28: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2a1c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a1c2c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a1c30: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2a1c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2a1c34: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2a1c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x2a1c38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1c3c: 0x846210a6  lh          $v0, 0x10A6($v1)
    ctx->pc = 0x2a1c3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2a1c40: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x2a1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x2a1c44: 0xa46210a6  sh          $v0, 0x10A6($v1)
    ctx->pc = 0x2a1c44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a1c48: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1c4c: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x2a1c4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x2a1c50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a1c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a1c54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a1c54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a1c58: 0x28411389  slti        $at, $v0, 0x1389
    ctx->pc = 0x2a1c58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x2a1c5c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1C5Cu;
    {
        const bool branch_taken_0x2a1c5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1c5c) {
            ctx->pc = 0x2A1C70u;
            goto label_2a1c70;
        }
    }
    ctx->pc = 0x2A1C64u;
    // 0x2a1c64: 0x24031388  addiu       $v1, $zero, 0x1388
    ctx->pc = 0x2a1c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x2a1c68: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1c6c: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x2a1c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
label_2a1c70:
    // 0x2a1c70: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1c74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1c78: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2a1c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x2a1c7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2a1c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2a1c80: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a1c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1c84: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a1c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a1c88: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a1c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1c8c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2a1c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2a1c90: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2A1C90u;
    SET_GPR_U32(ctx, 31, 0x2A1C98u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2A1C90u, 0x2A1C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C98u;
label_2a1c98:
    // 0x2a1c98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A1C98u;
    {
        const bool branch_taken_0x2a1c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1c98) {
            ctx->pc = 0x2A1CC0u;
            goto label_2a1cc0;
        }
    }
    ctx->pc = 0x2A1CA0u;
    // 0x2a1ca0: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x2a1ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1ca4: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x2a1ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x2a1ca8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a1ca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1cac: 0x0  nop
    ctx->pc = 0x2a1cacu;
    // NOP
    // 0x2a1cb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a1cb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1cb4: 0x0  nop
    ctx->pc = 0x2a1cb4u;
    // NOP
    // 0x2a1cb8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1CB8u;
    {
        const bool branch_taken_0x2a1cb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a1cb8) {
            ctx->pc = 0x2A1CC8u;
            goto label_2a1cc8;
        }
    }
    ctx->pc = 0x2A1CC0u;
label_2a1cc0:
    // 0x2a1cc0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1cc4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a1cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2a1cc8:
    // 0x2a1cc8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2a1cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1ccc: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x2a1cccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x2a1cd0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2a1cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a1cd4: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x2a1cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a1cd8: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x2a1cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2a1cdc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a1cdcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a1ce0: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2a1ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2a1ce4: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2A1CE4u;
    {
        const bool branch_taken_0x2a1ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1ce4) {
            ctx->pc = 0x2A1D84u;
            goto label_2a1d84;
        }
    }
    ctx->pc = 0x2A1CECu;
    // 0x2a1cec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1cf0: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2a1cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2a1cf4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2a1cf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a1cf8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2a1cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a1cfc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2a1cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2a1d00: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A1D00u;
    SET_GPR_U32(ctx, 31, 0x2A1D08u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A1D00u, 0x2A1D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D08u;
label_2a1d08:
    // 0x2a1d08: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2a1d0c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a1d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a1d10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a1d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a1d14: 0x0  nop
    ctx->pc = 0x2a1d14u;
    // NOP
    // 0x2a1d18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a1d18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a1d1c: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x2a1d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x2a1d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1d24: 0x0  nop
    ctx->pc = 0x2a1d24u;
    // NOP
    // 0x2a1d28: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a1d28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a1d2c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2a1d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1d30: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a1d30u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a1d34: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A1D34u;
    SET_GPR_U32(ctx, 31, 0x2A1D3Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A1D34u, 0x2A1D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D3Cu;
label_2a1d3c:
    // 0x2a1d3c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2a1d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2a1d40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1d44: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a1d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a1d48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a1d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a1d4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a1d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a1d50: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a1d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a1d54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a1d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a1d58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a1d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a1d5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a1d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a1d60: 0x34440108  ori         $a0, $v0, 0x108
    ctx->pc = 0x2a1d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)264);
    // 0x2a1d64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1d68: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a1d6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a1d6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a1d70: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a1d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a1d74: 0x244700c0  addiu       $a3, $v0, 0xC0
    ctx->pc = 0x2a1d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2a1d78: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a1d78u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a1d7c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A1D7Cu;
    SET_GPR_U32(ctx, 31, 0x2A1D84u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A1D7Cu, 0x2A1D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D84u;
label_2a1d84:
    // 0x2a1d84: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2a1d84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1d88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a1d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1d8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a1d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1d90: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2a1d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1d94: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1D9Cu;
}
