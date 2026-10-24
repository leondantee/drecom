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

// Function: entry_002e1408
// Address: 0x2e1408 - 0x2e151c
void entry_002e1408_0x2e1408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1408_0x2e1408");
#endif

    switch (ctx->pc) {
        case 0x2e1414u: goto label_2e1414;
        case 0x2e14e0u: goto label_2e14e0;
        default: break;
    }

    ctx->pc = 0x2e1408u;

    // 0x2e1408: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2e1408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e140c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E140Cu;
    SET_GPR_U32(ctx, 31, 0x2E1414u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E140Cu, 0x2E1414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1414u;
label_2e1414:
    // 0x2e1414: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e1414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e141c: 0x0  nop
    ctx->pc = 0x2e141cu;
    // NOP
    // 0x2e1420: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2e1420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2e1424: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e1424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e142c: 0x0  nop
    ctx->pc = 0x2e142cu;
    // NOP
    // 0x2e1430: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2e1430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2e1434: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e1434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e143c: 0x0  nop
    ctx->pc = 0x2e143cu;
    // NOP
    // 0x2e1440: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e1440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2e1444: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e1444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e144c: 0x0  nop
    ctx->pc = 0x2e144cu;
    // NOP
    // 0x2e1450: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2e1450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2e1454: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e1454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e1458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e145c: 0x0  nop
    ctx->pc = 0x2e145cu;
    // NOP
    // 0x2e1460: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2e1460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2e1464: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e1464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e1468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e146c: 0x0  nop
    ctx->pc = 0x2e146cu;
    // NOP
    // 0x2e1470: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2e1470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2e1474: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e1474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e1478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e147c: 0x0  nop
    ctx->pc = 0x2e147cu;
    // NOP
    // 0x2e1480: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e1480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e1484: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2e1484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2e1488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e148c: 0x0  nop
    ctx->pc = 0x2e148cu;
    // NOP
    // 0x2e1490: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2e1490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2e1494: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e1494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e149c: 0x0  nop
    ctx->pc = 0x2e149cu;
    // NOP
    // 0x2e14a0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2e14a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2e14a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e14a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e14a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e14a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e14ac: 0x0  nop
    ctx->pc = 0x2e14acu;
    // NOP
    // 0x2e14b0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2e14b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2e14b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e14b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e14b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e14b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e14bc: 0x0  nop
    ctx->pc = 0x2e14bcu;
    // NOP
    // 0x2e14c0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2e14c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2e14c4: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2e14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2e14c8: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2e14c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2e14cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e14ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e14d0: 0x0  nop
    ctx->pc = 0x2e14d0u;
    // NOP
    // 0x2e14d4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2e14d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2e14d8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E14D8u;
    SET_GPR_U32(ctx, 31, 0x2E14E0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E14D8u, 0x2E14E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E14E0u;
label_2e14e0:
    // 0x2e14e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e14e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e14e4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2e14e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2e14e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e14e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e14ec: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E14ECu;
    {
        const bool branch_taken_0x2e14ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e14ec) {
            ctx->pc = 0x2E1560u;
            return;
        }
    }
    ctx->pc = 0x2E14F4u;
    // 0x2e14f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e14f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e14f8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E14F8u;
    {
        const bool branch_taken_0x2e14f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e14f8) {
            ctx->pc = 0x2E1548u;
            return;
        }
    }
    ctx->pc = 0x2E1500u;
    // 0x2e1500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1504: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E1504u;
    {
        const bool branch_taken_0x2e1504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1504) {
            ctx->pc = 0x2E1530u;
            return;
        }
    }
    ctx->pc = 0x2E150Cu;
    // 0x2e150c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E150Cu;
    {
        const bool branch_taken_0x2e150c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e150c) {
            ctx->pc = 0x2E151Cu;
            return;
        }
    }
    ctx->pc = 0x2E1514u;
    // 0x2e1514: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E1514u;
    {
        const bool branch_taken_0x2e1514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1514) {
            ctx->pc = 0x2E1570u;
            return;
        }
    }
    ctx->pc = 0x2E151Cu;
}
